/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:13:49 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIAlertViewDelegate.h>

@interface RegistrationStartViewController : NLViewController <UIAlertViewDelegate> {
	UIView* statusBarBGView; 
	UIView* _contentView; 
	UIImageView* _imageView; 
	UILabel* _textLabel; 
	UIButton* _existingUserButton; 
	UIButton* _joinButton; 
}
@property (assign,nonatomic) UIView* contentView; 				//@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) UILabel* textLabel; 				//@synthesize textLabel=_textLabel - In the implementation block
@property (assign,nonatomic) UIButton* existingUserButton; 				//@synthesize existingUserButton=_existingUserButton - In the implementation block
@property (assign,nonatomic) UIButton* joinButton; 				//@synthesize joinButton=_joinButton - In the implementation block
-(void)configureTextLabel:(id)arg1;
-(void)configureSubviews;
-(void)setupLocalizedStrings;
-(void)updateLayouts;
-(void)configureImageView:(id)arg1;
-(void)configureExistingUserButton:(id)arg1;
-(void)configureJoinButton:(id)arg1;
-(void)configureStatusBGView;
-(void)setExistingUserButton:(id)arg1;
-(void)setJoinButton:(id)arg1;
-(void)existingUserButtonTapped:(id)arg1;
-(void)joinButtonTapped:(id)arg1;
-(void)sallyButtonTapped:(id)arg1;
-(void)setTextLabel:(id)arg1;
-(BOOL)prefersStatusBarHidden;
-(void)setContentView:(id)arg1;
-(void)viewWillAppear:(BOOL)arg1;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)setImageView:(id)arg1;
-(void).cxx_destruct;
@end