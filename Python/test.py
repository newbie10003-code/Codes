from PyPDF2 import PdfReader
from langchain.text_splitter import RecursiveCharacterTextSplitter
import os
import textwrap
from pathlib import Path
from langchain.chains import retrieval_qa
from langchain.prompts import PromptTemplate
from langchain.retrievers import ContextualCompressionRetriever
from langchain.retrievers.document_compressors import flashrank_rerank
from langchain.vectorstores import Qdrant
from langchain_community.embeddings.fastembed import FastEmbedEmbeddings
from langchain_core.prompts import PromptTemplate
from langchain_groq import ChatGroq

# os.environ[""]

def getText(pdfDoc):
    text = ""
    pdfReader = PdfReader(pdfDoc)
    for page in pdfReader.pages:
        text += page.extract_text()
    return text

data = getText("C:\\Users\\Newbie\\Desktop\\Codes\\Python\\Indian Penal Code Book (2).pdf")
text_splitter = RecursiveCharacterTextSplitter(chunk_size = 2048, chunk_overlap = 128)
docs = text_splitter.split_text(data)
# print(docs)
