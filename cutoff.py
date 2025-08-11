import pandas as pd
import fitz  # PyMuPDF
import re
import os

# PDF file locations on your Windows system
cet_pdf_path = r"C:\Users\srushti\Downloads\cet percentile.pdf"
jee_pdf_path = r"C:\Users\srushti\Downloads\jee percentile.pdf"
output_excel = r"C:\Users\srushti\Downloads\Final_College_Cutoffs.xlsx"

# Branch name mapping
branch_map = {
    "CS": "Computer Science",
    "IT": "Information Technology",
    "AI": "Artificial Intelligence and Data Science",
    "CE": "Computer Engineering"
}

# College list
colleges = [
    "Progressive Education Society's Modern College of Engineering, Pune",
    "Jaywant Shikshan Prasarak Mandal's Rajarshi Shahu College of Engineering, Tathawade, Pune",
    "Genba Sopanrao Moze College of Engineering, Wagholi, Pune",
    "Pimpri Chinchwad College of Engineering, Pune",
    "Vishwakarma Institute of Technology, Pune",
    "Sandip Institute of Engineering & Management, Nashik",
    "K. K. Wagh Institute of Engineering Education and Research, Nashik",
    "TSSMS's Pd. Vasantdada Patil Institute of Technology, Bavdhan, Pune",
    "MIT Academy of Engineering, Alandi, Pune",
    "G.H.Raisoni College of Engineering & Management, Wagholi, Pune",
    "Marathwada Mitra Mandal's College of Engineering, Karvenagar, Pune",
    "JSPM's Imperial College of Engineering and Research, Wagholi, Pune",
    "Pimpri Chinchwad Education Trust, Pimpri Chinchwad College of Engineering, Pune",
    "G. H.Raisoni Institute of Engineering and Technology, Wagholi, Pune",
    "Sinhgad College of Engineering, Vadgaon (BK), Pune",
    "Indira College of Engineering & Management, Pune",
    "Sinhgad Academy of Engineering, Kondhwa (BK) Kondhwa-Saswad Road, Pune",
    "Marathwada Mitra Mandal's Institute of Technology, Lohgaon, Pune",
    "Pune District Education Association's College of Engineering, Pune",
    "Dr. D. Y. Patil Pratishthan's D.Y.Patil College of Engineering Akurdi, Pune",
    "Bansilal Ramnath Agarawal Charitable Trust's Vishwakarma Institute of Technology, Bibwewadi, Pune",
    "Pune Vidyarthi Griha's College of Engineering and Technology, Pune",
    "All India Shri Shivaji Memorial Society's College of Engineering, Pune",
    "B.R.A.C.T's Vishwakarma Institute of Information Technology, Kondhwa (Bk.), Pune",
    "Zeal Education Society's Zeal College of Engineering & Reserch, Narhe, Pune",
    "Nutan Maharashtra Vidya Prasarak Mandal, Nutan Maharashtra Institute of Engineering &Technology, Talegaon station, Pune",
    "Trinity Academy of Engineering, Yewalewadi, Pune",
    "TSSM's Bhivarabai Sawant College of Engineering and Research, Narhe, Pune",
    "Dr. D. Y. Patil School OF Engineering, Lohegaon, Pune",
    "International Institute of Information Technology (I²IT), Pune",
    "JSPM Narhe Technical Campus, Pune",
    "Rasiklal M. Dhariwal Sinhgad Technical Institutes Campus, Warje, Pune",
    "NBN Sinhgad Technical Institutes Campus, Pune",
    "Dr. D.Y.Patil Institute of Engineering, Management & Reseach, Akurdi, Pune",
    "Keystone School of Engineering, Pune"
]

# Read all pages from both PDFs
def extract_text_from_pdf(pdf_path):
    if not os.path.exists(pdf_path):
        print(f"❌ File not found: {pdf_path}")
        return ""
    doc = fitz.open(pdf_path)
    return "\n".join(page.get_text() for page in doc)

cet_text = extract_text_from_pdf(cet_pdf_path)
jee_text = extract_text_from_pdf(jee_pdf_path)

# Function to match a college + branch cutoff
def find_cutoff(college, branch, text):
    pattern = rf"{re.escape(college)}.*?{re.escape(branch)}.*?(\d+\.\d+)"
    match = re.search(pattern, text, re.IGNORECASE | re.DOTALL)
    return match.group(1) if match else None

# Prepare DataFrame
columns = ["College Name", "CET (CS)", "JEE (CS)", "CET (IT)", "JEE (IT)", "CET (AI)", "JEE (AI)", "CET (CE)", "JEE (CE)"]
df = pd.DataFrame(columns=columns)
df["College Name"] = colleges

# Populate the DataFrame
for i, row in df.iterrows():
    college = row["College Name"]
    for short, full_branch in branch_map.items():
        cet = find_cutoff(college, full_branch, cet_text)
        jee = find_cutoff(college, full_branch, jee_text)
        if cet:
            df.at[i, f"CET ({short})"] = cet
        if jee:
            df.at[i, f"JEE ({short})"] = jee

# Save result to Excel
df.to_excel(output_excel, index=False)
print(f"✅ Final cutoff Excel saved to: {output_excel}")
