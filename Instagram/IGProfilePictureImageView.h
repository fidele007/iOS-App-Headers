/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:44 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGProfilePictureImageView : IGImageView {
	unsigned _roundedImageRenderTicker; 
	BOOL _buttonDisabled; 
	IGUser* _user; 
	IGSimpleButton* _profilePicButton; 
	UIImage* _originalImage; 
	int _borderStyle; 
	UIColor* _borderColor; 
	float _borderWidth; 
}
@property (nonatomic,retain) IGUser* user; 				//@synthesize user=_user - In the implementation block
@property (nonatomic,copy) IGSimpleButton* profilePicButton; 				//@synthesize profilePicButton=_profilePicButton - In the implementation block
@property (nonatomic,copy) UIImage* originalImage; 				//@synthesize originalImage=_originalImage - In the implementation block
@property (assign,nonatomic) int borderStyle; 				//@synthesize borderStyle=_borderStyle - In the implementation block
@property (assign,nonatomic) BOOL buttonDisabled; 				//@synthesize buttonDisabled=_buttonDisabled - In the implementation block
@property (nonatomic,retain) UIColor* borderColor; 				//@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic) float borderWidth; 				//@synthesize borderWidth=_borderWidth - In the implementation block
-(void)tapped:(id)arg1;
-(void)setButtonDisabled:(BOOL)arg1;
-(void)reloadRoundedImageWithImage:(id)arg1;
-(void)userUpdated:(id)arg1;
-(id)initWithFrame:(CGRect)arg1 user:(id)arg2;
-(void)setUser:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(void)setImage:(id)arg1;
-(void)setFrame:(CGRect)arg1;
-(void)setBounds:(CGRect)arg1;
-(void)setBorderWidth:(float)arg1;
-(void)setBorderColor:(id)arg1;
-(void)setBorderStyle:(int)arg1;
-(void).cxx_destruct;
@end