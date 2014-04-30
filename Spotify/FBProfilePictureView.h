/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:14 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBProfilePictureView : UIView {
	NSString* _profileID; 
	int _pictureCropping; 
	FBURLConnection* _connection; 
	UIImageView* _imageView; 
	NSString* _previousImageQueryParamString; 
}
@property (nonatomic,copy) NSString* profileID; 				//@synthesize profileID=_profileID - In the implementation block
@property (assign,nonatomic) int pictureCropping; 				//@synthesize pictureCropping=_pictureCropping - In the implementation block
@property (nonatomic,copy) NSString* imageQueryParamString; 
@property (nonatomic,retain) NSString* previousImageQueryParamString; 				//@synthesize previousImageQueryParamString=_previousImageQueryParamString - In the implementation block
@property (nonatomic,retain) FBURLConnection* connection; 				//@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) UIImageView* imageView; 				//@synthesize imageView=_imageView - In the implementation block
-(void)setPictureCropping:(int)arg1;
-(void)ensureImageViewContentMode;
-(void)setPreviousImageQueryParamString:(id)arg1;
-(void)refreshImage:(BOOL)arg1;
-(id)initWithProfileID:(id)arg1 pictureCropping:(int)arg2;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(id)init;
-(void)layoutSubviews;
-(void)initialize;
-(void)setImageView:(id)arg1;
-(void)setConnection:(id)arg1;
-(void)setProfileID:(id)arg1;
@end