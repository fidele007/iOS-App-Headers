/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:51 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <_UISettingsKeyObserver.h>

@interface PTXParallaxReferenceFrame : NSObject <_UISettingsKeyObserver> {
	GLKQuaternion==vGLKVector==xfyfzf=rfgfbf=sftfpfvfsf=xfyfzfwfqf[==3====3=4] _referenceQuaternion; 
	GLKQuaternion==vGLKVector==xfyfzf=rfgfbf=sftfpfvfsf=xfyfzfwfqf[==3====3=4] _absoluteQuaternion; 
	double _lastUpdate; 
	CGPoint _lastOffset; 
	double _idleStartTime; 
	CGPoint _idleStartOffset; 
	PTXParallaxEngineSettings* _settings; 
	CAMediaTimingFunction* _curveFunction; 
	float _smoothingDegree; 
	float _referenceShiftSpeed; 
	float _distanceMultiplier; 
	float _jumpThreshold; 
	unsigned long _jumpSound; 
	float _idleLeeway; 
	float _secondsBeforeIdle; 
	float _lockValue; 
	float _lockStrength; 
	UIWindow* _diagnosticsWindow; 
	UILabel* _idleIndicator; 
	UIView* _horizontalLockIndicator; 
	UIView* _verticalLockIndicator; 
}
-(void)dealloc;
-(CGPoint)offset;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2;
-(void)reset;
-(void)_updateSettings;
-(void)_tearDownDiagnosticsWindow;
-(void)_tearDownDirectionLockIndicators;
-(void)_tearDownIdleIndicator;
-(CGPoint)_currentRawOffset:(GLKQuaternion==GLKVector==fff=fff=fffff=fffff[==3====3=4])arg1;
-(void)_updateSmoothedOffsetForRawOffset:(CGPoint)arg1;
-(void)_updateDirectionalLockIndicators;
-(float)_referenceShiftRadiansPerSecondForAngle:(float)arg1;
-(void)_showIdleUI:(BOOL)arg1;
-(void)_createIdleIndicator;
-(void)_createDirectionLockIndicators;
-(void)_createDiagnosticsWindow;
-(id)initWithReferenceAttitude:(id)arg1 settings:(id)arg2;
-(void)updateWithAttitude:(id)arg1;
-(int)directionLockStatus;
-(float)directionLockStrength;
-(GLKQuaternion==GLKVector==fff=fff=fffff=fffff[==3====3=4])_relativeQuaternion:(GLKQuaternion==GLKVector==fff=fff=fffff=fffff[==3====3=4])arg1;
-(void)_updateIdleStateForRawOffset:(CGPoint)arg1;
-(void)_updateReferenceAttitude:(GLKQuaternion==GLKVector==fff=fff=fffff=fffff[==3====3=4])arg1;
-(BOOL)_isIdle;
-(CGPoint)_curvedOffset;
-(void).cxx_destruct;
@end