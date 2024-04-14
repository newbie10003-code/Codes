function f1() {
    cardType = String(document.getElementById("cardType").value)
    console.log(cardType)
    cardno = String(document.getElementById("card").value)
    console.log(typeof cardno)
    pre = cardno.slice(0, 2)
    if (cardType == "MasterCard")
    {
        if ((pre == "51" || pre == "52" || pre == "53" || pre == "54" || pre == "55") && cardno.length == 16) {
            bool = true
            for(i = 0; i < cardno.length; i++)
            {
                if (cardno.charAt(i) < "0" || cardno.charAt(i) > "9") {
                    alert("incorrect")
                    bool = false
                }
            }
            if (bool)
            {
                alert("Correct")
            }
        }
        else
        {
            alert("Incorrect")
        }
    }
    if (cardType == "Visa") {
        if (cardno[0] == "4" && (cardno.length == 13 || cardno.length == 16)) {
            bool = true
            for(i = 0; i < cardno.length; i++)
            {
                if (cardno.charAt(i) < "0" || cardno.charAt(i) > "9") {
                    alert("incorrect")
                    bool = false
                }
            }
            if (bool)
            {
                alert("Correct")
            }
        }
        else
        {
            alert("Incorrect")
        }
    }
    if (cardType == "Amex") {
        if ((cardno.slice(0, 2) == "34" || cardno.slice(0, 2) == "37") && cardno.length == 15) {
            bool = true
            for(i = 0; i < cardno.length; i++)
            {
                if (cardno.charAt(i) < "0" || cardno.charAt(i) > "9") {
                    alert("incorrect")
                    bool = false
                }
            }
            if (bool)
            {
                alert("Correct")
            }
        }
        else
        {
            alert("Incorrect")
        }
    }
}