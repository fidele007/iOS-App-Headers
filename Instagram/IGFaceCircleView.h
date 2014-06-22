/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:34:50 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGFaceCircleView : UIImageView {
	BOOL _isScaledDown; 
	IGUsertag* _usertag; 
	CGRect _faceRect; 
}
@property (assign,nonatomic) CGRect faceRect; 				//@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,retain) IGUsertag* usertag; 				//@synthesize usertag=_usertag - In the implementation block
@property (assign,nonatomic) BOOL isScaledDown; 				//@synthesize isScaledDown=_isScaledDown - In the implementation block
-(void)setUsertag:(id)arg1;
-(void)shrink:(BOOL)arg1 animated:(BOOL)arg2;
-(id)initWithFaceRect:(CGRect)arg1;
-(void)setIsScaledDown:(BOOL)arg1;
-(void)setFaceRect:(CGRect)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void).cxx_destruct;
@end