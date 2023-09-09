//T means teacher
var jsAllGradeT = [];
var jsGrade9T = [];
var jsGrade10T = [];
var jsGrade11T = [];
var jsGrade12T = [];
var jsTypeT = [];
var jsClubTypeT = [];
var teacherAnnouncementDetails = [];
var counter = 0;

function getExistingAnnouncement() {
    if (JSON.parse(localStorage.getItem("jsGrade9TKey")) !=null) {
        jsGrade9T = JSON.parse(localStorage.getItem("jsGrade9TKey"));
        jsGrade10T = JSON.parse(localStorage.getItem("jsGrade10TKey"));
        jsGrade11T = JSON.parse(localStorage.getItem("jsGrade11TKey"));
        jsGrade12T = JSON.parse(localStorage.getItem("jsGrade12TKey"));
        jsTypeT = JSON.parse(localStorage.getItem("jsTypeTKey"));
        jsClubTypeT = JSON.parse(localStorage.getItem("jsClubTKey"));
        teacherAnnouncementDetails = JSON.parse(localStorage.getItem("jsPostKey"));
        counter = jsGrade9T.length
    }
}

function postAnnouncement(){

    //Code checks which options are selected and values of options/posts
    jsGrade9T[counter] = document.getElementById("htmlGrade9T").checked;
    jsGrade10T[counter] = document.getElementById("htmlGrade10T").checked;
    jsGrade11T[counter] = document.getElementById("htmlGrade11T").checked;
    jsGrade12T[counter] = document.getElementById("htmlGrade12T").checked;
    jsTypeT[counter] = document.getElementById("teacherCategories").value;
    jsClubTypeT[counter] = document.getElementById("typeOfClubT").value;
    teacherAnnouncementDetails[counter] =  document.getElementById("announcementPosted").value;

    if (jsGrade9T || jsGrade10T || jsGrade11T || jsGrade12T) {
        //Stores the values above in the local storage
        localStorage.setItem('jsGrade9TKey', JSON.stringify(jsGrade9T));
        localStorage.setItem('jsGrade10TKey', JSON.stringify(jsGrade10T));
        localStorage.setItem('jsGrade11TKey',JSON.stringify(jsGrade11T));
        localStorage.setItem('jsGrade12TKey', JSON.stringify(jsGrade12T));
        localStorage.setItem('jsTypeTKey', JSON.stringify(jsTypeT));
        localStorage.setItem('jsClubTKey', JSON.stringify(jsClubTypeT));
        localStorage.setItem('jsPostKey', JSON.stringify(teacherAnnouncementDetails));
    } else {
        alert('Please enter a grade')
    }

    counter++

}
