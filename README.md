# Led Strip Controller Project
Contains all files for the GUI made in Qt Creator

Installing Qt framework:
  1. Open the following link: https://www.qt.io/download-dev
  2. Click "Apply for a Qt Educational License"
  3. Fill out the form, use your tmu email
  4. Verify your email adress, a link and instructions should be sent in your email
  5. Should be redirected to a page where the installer will be automatically downloaded
  6. Open the installer and sign in with your account credentials
  7. In the Installation folder section, choose where you want to install qt (could be at desktop or smtn) and choose the "Qt 6.8 for desktop development" option
  8. Complete the installation

Installing git:
  1. Open the following link: https://github.com/apps/desktop
  2. Download the installer
  3. Open the installer and install git for desktop

Cloning the ledProject Repository:
  1. On the main page click the green code icon towards the top right
  2. Copy the https github url
  3. Create a project folder in windows explorer, can name it anything really
  4. Open Git CMD (just search for it in start menu should be there)
  5. Type "git clone " and paste the url copied in step 2, dont enter the command yet
  6. In file explorer, open the project folder created in step 3 and copy the file path
  7. In Git CMD paste the copied filepath after the github url, press enter to run the command
  8. The project should now be in your project folder created in step 3

Opening the project in QT:
  1. Open QT creator
  2. In the top left select file > Open Workspace
  3. Go into the project folder and open the .pro folder (should be titled "projectFolderName.pro")\
  4. Files should open and you can now edit

To commit new changes to code files:
  After adding any edits to the code you have to upload the changes to the github 
  1. Open Git CMD 
  2. Move to project folder "ledProject" (cd .../ledProject)
  3. Type: git add.
  4. Type: git commit -m "Write commit message here"
  5. Type: git push
