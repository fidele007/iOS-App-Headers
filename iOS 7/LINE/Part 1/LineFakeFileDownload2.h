/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:40 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineFakeFileDownload2 : NSObject {
	NSMutableArray* _completionBlocks; 
	float _progress; 
}
@property (nonatomic,copy) float progress; 				//@synthesize progress=_progress - In the implementation block
-(void)setVerificationBlock:(id)arg1;
-(void)removeAllCompletionBlocks;
-(void)addProgressBlock:(id)arg1;
-(void)removeAllProgressBlocks;
-(void)download;
-(id)init;
-(void)addCompletionBlock:(id)arg1;
-(void).cxx_destruct;
@end