const contentDivData = {
    "objective-link" : {
        "title" : "Objective",
        "content" : "To leverage my skills and experience in software development to contribute to innovative projects, while continuously learning and growing professionally.",
        "relevant_image" : "objective.gif"
    },
    "personal-info-link" : {
        "title" : "Personal Information",
        "content" : "Name: Vishwas Malik<br/>Email: vishwas.malik@gmail.com<br/>Address: Clement Town, Dehradun, Uttarakhand<br/>Phone: (123) 456-7890",
        "relevant_image" : "personal-info.gif"
    },
    "family-info-link" : {
        "title" : "Family Information",
        "content" : "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed euismod eu lorem et ultricies. In porta lorem at dui semper, sit amet ornare nisl ullamcorper. Aliquam ut aliquet lacus.",
        "relevant_image" : "family-info.gif"
    },
    "educational-info-link" : {
        "title" : "Educational Information",
        "content" : "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed euismod eu lorem et ultricies. In porta lorem at dui semper, sit amet ornare nisl ullamcorper. Aliquam ut aliquet lacus.",
        "relevant_image" : "educational-info.gif"
    },
    "experience-link" : {
        "title" : "Experience",
        "content" : "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed euismod eu lorem et ultricies. In porta lorem at dui semper, sit amet ornare nisl ullamcorper. Aliquam ut aliquet lacus.",
        "relevant_image" : "experience.gif"
    },
    "achievements-link" : {
        "title" : "Achievements",
        "content" : "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed euismod eu lorem et ultricies. In porta lorem at dui semper, sit amet ornare nisl ullamcorper. Aliquam ut aliquet lacus.",
        "relevant_image" : "achievements.gif"
    },
    "other-link" : {
        "title" : "Other",
        "content" : "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed euismod eu lorem et ultricies. In porta lorem at dui semper, sit amet ornare nisl ullamcorper. Aliquam ut aliquet lacus.",
        "relevant_image" : "other.gif"
    }
};

const contentLinksIds = Object.keys(contentDivData);

const handleLinkClick = (id) => {
    document.getElementById("content-div").innerHTML = `<h3 class="p-1 pl-2 border"> ${contentDivData[id].title} </h3> <p class="p-2"> ${contentDivData[id].content} </p>`;
    document.getElementById("relevant-image-div").innerHTML = `<img src="assets/${contentDivData[id].relevant_image}" alt="${contentDivData[id].title}" />`; 
}

document.addEventListener("DOMContentLoaded",()=>{
    contentLinksIds.forEach((id) => {
        document.getElementById(id).addEventListener("click", () => {
            handleLinkClick(id);
        });
    }
    );
    document.getElementById("objective-link").click();
});
