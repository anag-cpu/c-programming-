
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TotalQ 25
#define BonusQ 10
#define QuesperG 5
#define BonperG 3

typedef struct {
    char question[200];
    char options[4][100];
    int correctAnswer;
} Question;

Question easy[TotalQ] = {
{"What does WWW stand for?", {{"World Wide Web"},{"Wide World Web"},{"Web World Wide"},{"World Web Wide"}}, 1},
{"Which is a strong password?", {{"123456"},{"password"},{"Ab@9kL!2"},{"qwerty"}}, 3},
{"What does CPU stand for?", {{"Central Processing Unit"},{"Computer Personal Unit"},{"Central Power User"},{"Control Program Unit"}}, 1},
{"Which device connects you to the internet?", {{"Router"},{"Printer"},{"Speaker"},{"Monitor"}}, 1},
{"What does USB stand for?", {{"Universal Serial Bus"},{"User Secure Board"},{"United System Backup"},{"Universal Safe Browser"}}, 1},
{"Antivirus software protects against:", {{"Games"},{"Malware"},{"Music files"},{"Monitors"}}, 2},
{"Before clicking a suspicious link, you should:", {{"Click quickly"},{"Ignore always"},{"Check the sender"},{"Forward it"}}, 3},
{"Which is a type of malware?", {{"Firewall"},{"Ransomware"},{"Keyboard"},{"Monitor"}}, 2},
{"HTTPS means a website is:", {{"Fast"},{"Secure"},{"Broken"},{"Offline"}}, 2},
{"What is a password used for?", {{"Decoration"},{"Security"},{"Music"},{"Games"}}, 2},
{"What should you never share?", {{"Your name"},{"Your password"},{"Your hobby"},{"Your favorite color"}}, 2},
{"A firewall is used to:", {{"Block hackers"},{"Print files"},{"Store music"},{"Speed internet"}}, 1},
{"Phishing tries to:", {{"Help users"},{"Steal information"},{"Fix errors"},{"Improve speed"}}, 2},
{"VPN stands for:", {{"Virtual Private Network"},{"Verified Public Network"},{"Virtual Personal Node"},{"Very Private Net"}}, 1},
{"Two-factor authentication adds:", {{"Extra security"},{"More viruses"},{"Slow internet"},{"Free WiFi"}}, 1},
{"Which is safest?", {{"Public WiFi for banking"},{"Sharing passwords"},{"Using 2FA"},{"Clicking unknown links"}}, 3},
{"Malware means:", {{"Good software"},{"Harmful software"},{"Game app"},{"Update tool"}}, 2},
{"Unknown email attachments should be:", {{"Opened immediately"},{"Deleted or scanned"},{"Forwarded"},{"Ignored security"}}, 2},
{"What is ransomware?", {{"Free app"},{"Virus that demands money"},{"Antivirus"},{"Backup system"}}, 2},
{"Which one is a web browser?", {{"Chrome"},{"CPU"},{"Router"},{"Firewall"}}, 1},
{"Which is personal information?", {{"Weather"},{"Your bank PIN"},{"News"},{"Public post"}}, 2},
{"Encryption protects:", {{"Privacy"},{"Volume"},{"Battery"},{"Screen"}}, 1},
{"A hacker tries to:", {{"Cook food"},{"Steal data"},{"Drive car"},{"Print books"}}, 2},
{"Strong passwords include:", {{"Only numbers"},{"Only name"},{"Letters numbers symbols"},{"Birth year"}}, 3},
{"Logging out prevents:", {{"Security"},{"Unauthorized access"},{"Speed"},{"Updates"}}, 2}
};

Question easyBonus[BonusQ] = {
{"What does BIOS stand for?", {{"Basic Input Output System"},{"Binary Internet OS"},{"Backup Internal OS"},{"Basic Internet Output"}}, 1},
{"Secure way to store passwords?", {{"Password manager"},{"Notebook"},{"Text file"},{"Sharing"}}, 1},
{"2FA requires:", {{"Two verifications"},{"Two passwords"},{"Two emails"},{"Two phones"}}, 1},
{"Example of cloud storage?", {{"Google Drive"},{"CPU"},{"Monitor"},{"Router"}}, 1},
{"Executable file extension?", {{".exe"},{".jpg"},{".mp3"},{".txt"}}, 1},
{"CAPTCHA prevents:", {{"Bots"},{"Humans"},{"Viruses"},{"Updates"}}, 1},
{"Safer on public WiFi?", {{"Using VPN"},{"Banking directly"},{"Sharing passwords"},{"Turning off firewall"}}, 1},
{"Software updates fix:", {{"Security flaws"},{"Battery"},{"Screen"},{"Keyboard"}}, 1},
{"Personal data example?", {{"National ID"},{"Weather"},{"News"},{"Blog"}}, 1},
{"Secure website shows:", {{"Padlock icon"},{"Ads"},{"Bright colors"},{"Large text"}}, 1}
};

Question medium[TotalQ] = {
{"What is phishing?", {{"Fishing"},{"Fake emails to steal data"},{"Video call"},{"Firewall setup"}}, 2},
{"What is DDoS?", {{"Download service"},{"Distributed Denial of Service"},{"Data deletion"},{"Digital defense"}}, 2},
{"Encryption does?", {{"Deletes files"},{"Secures data"},{"Speeds internet"},{"Compresses"}}, 2},
{"Brute force attack?", {{"Guess passwords"},{"Fishing"},{"Firewall"},{"VPN"}}, 1},
{"Zero-day vulnerability?", {{"Unknown flaw"},{"Old bug"},{"Firewall"},{"Router"}}, 1},
{"Best security improvement?", {{"Short passwords"},{"Reuse passwords"},{"2FA"},{"Sharing"}}, 3},
{"Social engineering targets?", {{"Hardware"},{"Software"},{"People"},{"Routers"}}, 3},
{"VPN used for?", {{"Gaming"},{"Secure connection"},{"Printing"},{"Speed"}}, 2},
{"Not malware?", {{"Virus"},{"Worm"},{"Firewall"},{"Trojan"}}, 3},
{"Trojan malware?", {{"Encrypts files"},{"Disguised program"},{"Blocks WiFi"},{"Deletes RAM"}}, 2},
{"Secure web protocol?", {{"HTTP"},{"FTP"},{"HTTPS"},{"SMTP"}}, 3},
{"SQL injection targets?", {{"Database"},{"Keyboard"},{"Monitor"},{"Router"}}, 1},
{"Hash function used for?", {{"Password storage"},{"Gaming"},{"Printing"},{"Video"}}, 1},
{"Secret listening attack?", {{"Eavesdropping"},{"Phishing"},{"DDoS"},{"Firewall"}}, 1},
{"MFA requires?", {{"One password"},{"Two proofs"},{"WiFi"},{"Firewall"}}, 2},
{"Firewall filters?", {{"Traffic"},{"Music"},{"Games"},{"Emails only"}}, 1},
{"Spyware?", {{"Protective tool"},{"Tracks secretly"},{"Antivirus"},{"Router"}}, 2},
{"Safe practice?", {{"Open links"},{"Regular updates"},{"Disable antivirus"},{"Reuse passwords"}}, 2},
{"Public WiFi risk?", {{"Free speed"},{"Data theft"},{"Extra RAM"},{"Battery"}}, 2},
{"Backup helps against?", {{"Ransomware"},{"Speed"},{"Printing"},{"Brightness"}}, 1},
{"Symmetric encryption?", {{"AES"},{"RSA"},{"Firewall"},{"VPN"}}, 1},
{"Asymmetric encryption?", {{"RSA"},{"AES"},{"USB"},{"WPA"}}, 1},
{"Integrity means?", {{"Not altered"},{"Fast"},{"Deleted"},{"Shared"}}, 1},
{"Availability means?", {{"Accessible"},{"Hidden"},{"Stolen"},{"Deleted"}}, 1},
{"Confidentiality means?", {{"Privacy"},{"Speed"},{"Gaming"},{"Updates"}}, 1}
};

Question mediumBonus[BonusQ] = {
{"DNS stands for?", {{"Domain Name System"},{"Data Node Service"},{"Dynamic Network Setup"},{"Digital Node Security"}}, 1},
{"MAC address identifies?", {{"Device"},{"Website"},{"Password"},{"Firewall"}}, 1},
{"Fake WiFi attack?", {{"Evil twin"},{"Phishing"},{"Brute force"},{"DDoS"}}, 1},
{"FTP used for?", {{"File transfer"},{"Email"},{"Encryption"},{"WiFi"}}, 1},
{"SMTP used for?", {{"Sending email"},{"File transfer"},{"Encryption"},{"DNS"}}, 1},
{"SSH provides?", {{"Secure remote access"},{"Delete files"},{"Crack passwords"},{"WiFi boost"}}, 1},
{"Botnet is?", {{"Infected network"},{"Firewall"},{"Antivirus"},{"Router"}}, 1},
{"MFA example?", {{"Password + OTP"},{"Password only"},{"PIN only"},{"Username only"}}, 1},
{"Website defacement is?", {{"Content modification"},{"Phishing"},{"Brute force"},{"VPN"}}, 1},
{"Offsite backup?", {{"Cloud"},{"USB"},{"Local disk"},{"RAM"}}, 1}
};

Question hard[TotalQ] = {
{"CIA triad stands for?", {{"Confidentiality Integrity Availability"},{"Cyber Internal Attack"},{"Central Internet Access"},{"Code Integrity Access"}}, 1},
{"HTTPS port?", {{"80"},{"21"},{"443"},{"25"}}, 3},
{"HTTP port?", {{"443"},{"80"},{"110"},{"53"}}, 2},
{"AES type?", {{"Symmetric"},{"Asymmetric"},{"Hashing"},{"Firewall"}}, 1},
{"RSA uses?", {{"One key"},{"Two keys"},{"Three keys"},{"No keys"}}, 2},
{"Flood server attack?", {{"Phishing"},{"DDoS"},{"Trojan"},{"Spyware"}}, 2},
{"XSS stands for?", {{"Cross-Site Scripting"},{"Extra Secure System"},{"Extended Safe Server"},{"XML Secure Script"}}, 1},
{"Digital signatures ensure?", {{"Integrity authenticity"},{"Speed"},{"Deletion"},{"Storage"}}, 1},
{"Hashing used for?", {{"Integrity check"},{"Encryption"},{"Speed"},{"Blocking"}}, 1},
{"Intercept communication?", {{"Man-in-middle"},{"Firewall"},{"VPN"},{"Antivirus"}}, 1},
{"Hashing algorithm?", {{"SHA-256"},{"AES"},{"RSA"},{"WPA2"}}, 1},
{"Spoofing means?", {{"Impersonation"},{"Encryption"},{"Backup"},{"Firewall"}}, 1},
{"Firewall does?", {{"Filter traffic"},{"Print"},{"Scan"},{"Store"}}, 1},
{"WPA3 secures?", {{"WiFi"},{"Websites"},{"Emails"},{"USB"}}, 1},
{"Pen testing?", {{"Authorized testing"},{"Illegal hacking"},{"Virus spread"},{"Data theft"}}, 1},
{"Rootkit is?", {{"Hidden malware"},{"Firewall"},{"Antivirus"},{"VPN"}}, 1},
{"Integrity ensures?", {{"Not altered"},{"Accessible"},{"Private"},{"Fast"}}, 1},
{"Availability ensures?", {{"Accessible"},{"Hidden"},{"Deleted"},{"Encrypted"}}, 1},
{"Confidentiality ensures?", {{"Privacy"},{"Speed"},{"Gaming"},{"Backup"}}, 1},
{"Fast password guessing?", {{"Brute force"},{"Phishing"},{"DDoS"},{"Spoofing"}}, 1},
{"Port scanner tool?", {{"Nmap"},{"Word"},{"Excel"},{"Paint"}}, 1},
{"SSL/TLS used for?", {{"Secure communication"},{"Speed"},{"Delete malware"},{"Block ports"}}, 1},
{"Zero-day is?", {{"Unknown flaw"},{"Old virus"},{"Router"},{"Firewall"}}, 1},
{"Spreads automatically?", {{"Worm"},{"Firewall"},{"Switch"},{"Monitor"}}, 1},
{"GDPR protects?", {{"Data privacy"},{"Speed"},{"WiFi"},{"USB"}}, 1}
};

Question hardBonus[BonusQ] = {
{"HTTPS commonly uses?", {{"TLS"},{"FTP"},{"SMTP"},{"DNS"}}, 1},
{"Fake login page attack?", {{"Credential harvesting"},{"Firewall"},{"Port scan"},{"Encryption"}}, 1},
{"Never trust verify model?", {{"Zero Trust"},{"Open Access"},{"Guest"},{"Public"}}, 1},
{"Stronger hash?", {{"SHA-256"},{"MD5"},{"DES"},{"RC4"}}, 1},
{"Least privilege means?", {{"Limited permissions"},{"Full access"},{"Guest mode"},{"Admin sharing"}}, 1},
{"Assigns IP automatically?", {{"DHCP"},{"Firewall"},{"Switch"},{"Printer"}}, 1},
{"Salting means?", {{"Add random before hashing"},{"Delete password"},{"Share password"},{"Encrypt twice"}}, 1},
{"Database injection attack?", {{"SQL injection"},{"DDoS"},{"Spoofing"},{"Phishing"}}, 1},
{"Resolves domain names?", {{"DNS"},{"FTP"},{"HTTP"},{"SMTP"}}, 1},
{"Endpoint security protects?", {{"Devices"},{"Cables"},{"Printers"},{"Routers only"}}, 1}
};

int main()
{
    int level, score=0, lives=3, marks, m=0, ans, q, bq;
    int correctAnswer;
    char again, bonus;
    time_t start, end;
    double timeTaken;

    srand(time(0));

    printf("========== CYBER SECURITY QUIZ ==========\n");
    printf("RULES:\n");
    printf("- Select a difficulty level: Easy, Medium, or Hard.\n");
    printf("- Each game has 5 main questions.\n");
    printf("- Each question has a 10-second timer.\n");
    printf("- Points for correct answers:\n Easy=2\n Medium=4\n Hard=6.\n");
    printf("- You start with 3 lives. Wrong answers cost 1 life.\n");
    printf("- If time runs out but your answer is correct, no points are gained or lost.\n");
    printf("- Bonus round after main game: 3 questions worth 5 points each.\n");
    printf("- Game ends when you lose all lives or finish all questions.\n\n");


    do
    {


        printf("1. Easy\n2. Medium\n3. Hard\n");
        printf("Select Level: ");
        scanf("%d",&level);

        if(level==1){ marks=2; m+=QuesperG*marks; }
        else if(level==2){ marks=4; m+=QuesperG*marks; }
        else if(level==3){ marks=6; m+=QuesperG*marks; }
        else continue;

        int used[TotalQ]={0};
        int count=0;

        while(count < QuesperG && lives>0)
        {
            Question current;
            q = rand()%TotalQ;
            if(used[q]) continue;
            used[q]=1;
            count++;

            if(level==1) current=easy[q];
            else if(level==2) current=medium[q];
            else current=hard[q];

            printf("\nQuestion %d\n",count);
            start=time(NULL);

            printf("%s\n",current.question);
            for(int i=0;i<4;i++)
                printf("%d. %s\n",i+1,current.options[i]);

            scanf("%d",&ans);
            correctAnswer=current.correctAnswer;

            end=time(NULL);
            timeTaken=difftime(end,start);

            if(timeTaken>10)
            {
                printf("TIME UP!\n");
                if(ans!=correctAnswer)
                {
                    lives--;
                    printf("Correct Answer: %d. %s\n",
                           correctAnswer,
                           current.options[correctAnswer-1]);
                }
            }
            else
            {
                if(ans==correctAnswer)
                {
                    printf("Correct!\n");
                    score+=marks;
                }
                else
                {
                    lives--;
                    printf("Wrong! Correct Answer: %d. %s\n",
                           correctAnswer,
                           current.options[correctAnswer-1]);
                }
            }

            printf("Score: %d / %d | Lives: %d\n",score,m,lives);
        }

        printf("\nDo you want to attempt Bonus Round? (y/n): ");
        scanf(" %c",&bonus);

        if(bonus=='y'||bonus=='Y')
        {
            int usedBonus[BonusQ]={0};
            int bonusCount=0;
            m+=BonperG*5;

            while(bonusCount<BonperG)
            {
                Question currentBonus;
                bq=rand()%BonusQ;
                if(usedBonus[bq]) continue;
                usedBonus[bq]=1;
                bonusCount++;

                if(level==1) currentBonus=easyBonus[bq];
                else if(level==2) currentBonus=mediumBonus[bq];
                else currentBonus=hardBonus[bq];

                printf("\nBONUS QUESTION %d\n",bonusCount);
                printf("%s\n",currentBonus.question);
                for(int i=0;i<4;i++)
                    printf("%d. %s\n",i+1,currentBonus.options[i]);

                scanf("%d",&ans);
                correctAnswer=currentBonus.correctAnswer;

                if(ans==currentBonus.correctAnswer)
                {
                    score+=5;
                    printf("Correct!\n");
                }
                else
                {
                    printf("Wrong! Correct Answer: %d. %s\n",
                           currentBonus.correctAnswer,
                           currentBonus.options[currentBonus.correctAnswer-1]);
                }
                    printf("Score: %d / %d | Lives: %d\n",score,m,lives);
            }
        }

        printf("\nFINAL SCORE: %d / %d\n",score,m);
        printf("\nPlay again? (y/n): ");
        scanf(" %c",&again);

    }while(again=='y'||again=='Y');

    printf("\nThanks for playing!\n");
    return 0;
}