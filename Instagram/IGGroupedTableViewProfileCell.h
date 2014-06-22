/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:44 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGProfilePictureImageViewDelegate.h>
#import <IGImageViewDelegate.h>

@interface IGGroupedTableViewProfileCell : IGGroupedTableViewCell <IGProfilePictureImageViewDelegate, IGImageViewDelegate> {
	IGProfilePictureHelper* _profilePictureHelper; 
	IGTextField* _usernameField; 
	IGTextField* _passwordField; 
	IGProfilePictureImageView* _profilePictureView; 
	UIViewController<UITextFieldDelegate><IGProfilePictureHelperDelegate>* _delegate; 
	UIButton* _profilePictureEditButton; 
}
@property (nonatomic,retain) IGTextField* usernameField; 				//@synthesize usernameField=_usernameField - In the implementation block
@property (nonatomic,retain) IGTextField* passwordField; 				//@synthesize passwordField=_passwordField - In the implementation block
@property (nonatomic,retain) IGProfilePictureImageView* profilePictureView; 				//@synthesize profilePictureView=_profilePictureView - In the implementation block
@property (assign,nonatomic) UIImage* profilePicture; 
@property (assign,nonatomic,__weak) UIViewController<UITextFieldDelegate><IGProfilePictureHelperDelegate>* delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIButton* profilePictureEditButton; 				//@synthesize profilePictureEditButton=_profilePictureEditButton - In the implementation block
+(float)height;
-(void)setProfilePictureView:(id)arg1;
-(void)profilePictureTapped:(id)arg1;
-(id)initWithProfilePictureRect:(CGRect)arg1;
-(void)chooseProfilePicture;
-(void)loadFacebookProfilePicture;
-(id)initWithProfilePicturePosition:(int)arg1;
-(void)setProfilePicture:(id)arg1;
-(void)setProfilePictureEditButton:(id)arg1;
-(void)setUsernameField:(id)arg1;
-(void)setPasswordField:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)init;
-(void).cxx_destruct;
@end