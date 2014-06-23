/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:43 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface MBProfileImage : MBURLImage {
	UIImage* mListProfileImage; 
	UIImage* mCoverProfileImage; 
	UIImage* mTitleProfileImage; 
	double mLoadTime; 
	BOOL mIsShouldCache; 
}
@property (assign,nonatomic) BOOL isShouldCache; 
+(id)noListProfileImage;
+(id)profileImageWithMID:(id)arg1;
+(id)noProfileImage100;
+(id)profileImageWithUrl:(id)arg1;
+(id)noCoverProfileImage;
+(BOOL)isProfileImageEmptyError:(id)arg1;
+(id)noProfileImage66;
-(id)listProfileImage;
-(void)resetImages;
-(id)coverProfileImage;
-(void)setIsShouldCache:(BOOL)arg1;
-(void)reload;
-(BOOL)shouldCache;
-(BOOL)shouldReload;
-(void).cxx_destruct;
@end