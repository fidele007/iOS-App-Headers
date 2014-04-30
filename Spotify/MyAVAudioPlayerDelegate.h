/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:37 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <AVAudioPlayerDelegate.h>

@interface MyAVAudioPlayerDelegate : NSObject <AVAudioPlayerDelegate> {
	struct AudioFilePlayerIos* player; 
	AVAudioPlayer* avPlayer; 
	NSTimer* periodicTimer; 
	_Bool saidWillEnd; 
}
-(void)unscheduleTimer;
-(void)periodic;
-(void)scheduleTimer;
-(id)initWithLocalFilePlayer:(struct AudioFilePlayerIos*)arg1 avAudioPlayer:(id)arg2;
-(void)dealloc;
-(void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(BOOL)arg2;
-(void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
-(void)audioPlayerBeginInterruption:(id)arg1;
-(void)audioPlayerEndInterruption:(id)arg1;
@end