/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:52 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface PTLegibleTextAssistant : NSObject {
	BOOL _effectsDisabled; 
	PTLegibleTextAssistantSettings* _settings; 
	float _alphaStrength; 
	float _radiusStrength; 
	float _largestShadowRadius; 
	struct {
		float meanRed;
		float meanGreen;
		float meanBlue;
		float meanHue;
		float meanSaturation;
		float meanBrightness;
		float meanAlpha;
		float standardDeviationBrightness;
		float standardDeviationSaturation;
	} _imageStatistics; 
}
@property (assign,nonatomic) struct imageStatistics; 				//@synthesize imageStatistics=_imageStatistics - In the implementation block
@property (nonatomic,retain) PTLegibleTextAssistantSettings* settings; 				//@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) float alphaStrength; 				//@synthesize alphaStrength=_alphaStrength - In the implementation block
@property (assign,nonatomic) float radiusStrength; 				//@synthesize radiusStrength=_radiusStrength - In the implementation block
@property (assign,nonatomic) BOOL effectsDisabled; 				//@synthesize effectsDisabled=_effectsDisabled - In the implementation block
@property (assign,nonatomic) float largestShadowRadius; 				//@synthesize largestShadowRadius=_largestShadowRadius - In the implementation block
-(void)setSettings:(id)arg1;
-(void)setAlphaStrength:(float)arg1;
-(void)setRadiusStrength:(float)arg1;
-(void)setImageStatistics:(struct )arg1;
-(void)setLargestShadowRadius:(float)arg1;
-(CGRect)legibleTextAssistantViewFrameForText:(id)arg1 font:(id)arg2;
-(id)generateForegroundImageForText:(id)arg1 font:(id)arg2 imageSize:(CGSize)arg3;
-(id)generateTextAssistantImageForText:(id)arg1 font:(id)arg2 imageSize:(CGSize)arg3;
-(id)initWithImageStatistics:(struct )arg1;
-(id)legibleTextAssistantViewForText:(id)arg1 font:(id)arg2;
-(void)setEffectsDisabled:(BOOL)arg1;
-(void).cxx_destruct;
@end