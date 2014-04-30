/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:26:01 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GaiaBackgroundController : NSObject {
	_Bool _canPlay; 
	_Bool _isBackgrounded; 
	PlayController* _playController; 
	SPTGaiaDeviceManager* _deviceManager; 
	unsigned _gaiaBackgroundTask; 
}
@property (assign,nonatomic,__weak) PlayController* playController; 				//@synthesize playController=_playController - In the implementation block
@property (assign,nonatomic,__weak) SPTGaiaDeviceManager* deviceManager; 				//@synthesize deviceManager=_deviceManager - In the implementation block
@property (assign,nonatomic) unsigned gaiaBackgroundTask; 				//@synthesize gaiaBackgroundTask=_gaiaBackgroundTask - In the implementation block
@property (assign,nonatomic) _Bool canPlay; 				//@synthesize canPlay=_canPlay - In the implementation block
@property (assign,nonatomic) _Bool isBackgrounded; 				//@synthesize isBackgrounded=_isBackgrounded - In the implementation block
-(void)setPlayController:(id)arg1;
-(void)backgrounded;
-(void)foregrounded;
-(_Bool)updateCanPlayState;
-(void)setCanPlay:(_Bool)arg1;
-(void)setIsBackgrounded:(_Bool)arg1;
-(void)setGaiaBackgroundTask:(unsigned)arg1;
-(void)cancelBackgroundTask;
-(id)initWithPlayController:(id)arg1 deviceManager:(id)arg2;
-(void)dealloc;
-(void)setDeviceManager:(id)arg1;
-(void).cxx_destruct;
@end