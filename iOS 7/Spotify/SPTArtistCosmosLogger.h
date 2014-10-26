/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:23:35 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTArtistCosmosLogger : NSObject {
	SPTRouter* _router; 
	NSString* _source; 
	NSString* _sourceVersion; 
}
@property (nonatomic,retain) SPTRouter* router; 				//@synthesize router=_router - In the implementation block
@property (nonatomic,retain) NSString* source; 				//@synthesize source=_source - In the implementation block
@property (nonatomic,retain) NSString* sourceVersion; 				//@synthesize sourceVersion=_sourceVersion - In the implementation block
-(void)logFeatureViewLoadingEventWithUri:(id)arg1 loadingTime:(double)arg2;
-(void)logFeatureErrorEventWithUri:(id)arg1 error:(id)arg2;
-(void)logFeatureTapEventWithContextUri:(id)arg1 targetUri:(id)arg2 type:(unsigned)arg3 index:(id)arg4;
-(void)logFeatureEventWithName:(id)arg1 data:(id)arg2;
-(id)tapTypeToString:(unsigned)arg1;
-(id)initWithRouter:(id)arg1 source:(id)arg2 sourceVersion:(id)arg3;
-(void)setRouter:(id)arg1;
-(void)setSource:(id)arg1;
-(void)setSourceVersion:(id)arg1;
-(void).cxx_destruct;
@end