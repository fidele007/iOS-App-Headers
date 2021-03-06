//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSObject<PHAudioPlayerDataSource>, NSString, NSTimer, PHVoicemailAudioController;

@interface PHAudioPlayer : NSObject
{
    PHVoicemailAudioController *_audioController;
    NSNumber *_seekToTime;
    _Bool _isPlaying;
    _Bool _isPlayable;
    _Bool _progressiveDurationAvailable;
    float _elapsedTime;
    float _playableTime;
    float _totalTime;
    float _progressBarWidth;
    NSObject<PHAudioPlayerDataSource> *_dataSource;
    id <PHAudioPlayerDelegate> _audioPlayerDelegate;
    NSString *_selectedRoute;
    NSTimer *_delayedPlaybackTimer;
    NSTimer *_progressUpdateTimer;
    unsigned long long _currentFileSize;
    unsigned long long _expectedFileSize;
}

+ (id)sharedAudioPlayer;
@property _Bool progressiveDurationAvailable; // @synthesize progressiveDurationAvailable=_progressiveDurationAvailable;
@property unsigned long long expectedFileSize; // @synthesize expectedFileSize=_expectedFileSize;
@property unsigned long long currentFileSize; // @synthesize currentFileSize=_currentFileSize;
@property(nonatomic) NSTimer *progressUpdateTimer; // @synthesize progressUpdateTimer=_progressUpdateTimer;
@property(nonatomic) NSTimer *delayedPlaybackTimer; // @synthesize delayedPlaybackTimer=_delayedPlaybackTimer;
@property(copy, nonatomic) NSString *selectedRoute; // @synthesize selectedRoute=_selectedRoute;
@property(nonatomic) float progressBarWidth; // @synthesize progressBarWidth=_progressBarWidth;
@property(nonatomic) id <PHAudioPlayerDelegate> audioPlayerDelegate; // @synthesize audioPlayerDelegate=_audioPlayerDelegate;
@property float totalTime; // @synthesize totalTime=_totalTime;
@property float playableTime; // @synthesize playableTime=_playableTime;
@property float elapsedTime; // @synthesize elapsedTime=_elapsedTime;
@property(retain, nonatomic) NSObject<PHAudioPlayerDataSource> *dataSource; // @synthesize dataSource=_dataSource;
@property _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)_proximityStateChanged:(id)arg1;
- (void)_handlePlayableDurationChanged:(id)arg1;
- (void)_updateDurations;
- (void)_forceUpdateProgressiveDataLengths;
- (_Bool)_fileExists:(id)arg1;
- (void)seekToTime:(float)arg1;
- (void)_stopPlayingWithError:(id)arg1;
- (void)stop;
- (void)_updateProgress;
- (_Bool)_updateElapsedTime;
- (void)_setupProgressUpdateTimer;
- (void)_avControllerDied:(id)arg1;
- (void)_avControllerPlaybackInterrupted:(id)arg1;
- (void)_avControllerPlaybackRateChanged:(id)arg1;
- (void)_avControllerPlaybackDidEnd:(id)arg1;
- (void)_avControllerPlaybackStateDidChangeItem:(id)arg1;
- (void)_avControllerTimeJumped:(id)arg1;
- (void)_start;
- (_Bool)_createVoicemailAVItemIfNecessary:(id *)arg1;
- (void)start;
- (void)dealloc;
@property(readonly) PHVoicemailAudioController *audioController;
- (id)initForVoicemailGreeting;
- (id)initForVoicemail;
- (id)init;

@end

