/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:36:21 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <IGMediaMetadataProtocol.h>

@interface IGVideoMetadata : NSObject <IGMediaMetadataProtocol> {
	int _posterFrameIndex; 
	float _videoTimeLength; 
	int _videoSourceType; 
	NSArray* _clipMetadata; 
}
@property (assign,nonatomic) int posterFrameIndex; 				//@synthesize posterFrameIndex=_posterFrameIndex - In the implementation block
@property (assign,nonatomic) float videoTimeLength; 				//@synthesize videoTimeLength=_videoTimeLength - In the implementation block
@property (assign,nonatomic) int videoSourceType; 				//@synthesize videoSourceType=_videoSourceType - In the implementation block
@property (nonatomic,retain) NSArray* clipMetadata; 				//@synthesize clipMetadata=_clipMetadata - In the implementation block
-(id)sharingInfo;
-(void)prepareToShare;
-(id)initWithVideo:(id)arg1;
-(void)updateKeyPosition:(float)arg1;
-(void)setClipMetadata:(id)arg1;
-(void)setVideoTimeLength:(float)arg1;
-(void)setVideoSourceType:(int)arg1;
-(void)setPosterFrameIndex:(int)arg1;
-(void).cxx_destruct;
@end