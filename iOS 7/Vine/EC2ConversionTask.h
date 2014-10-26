/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:08 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface EC2ConversionTask : NSObject {
	NSString* conversionTaskId; 
	NSString* expirationTime; 
	EC2ImportInstanceTaskDetails* importInstance; 
	EC2ImportVolumeTaskDetails* importVolume; 
	NSString* state; 
	NSString* statusMessage; 
	NSMutableArray* tags; 
}
@property (nonatomic,retain) NSString* conversionTaskId; 
@property (nonatomic,retain) NSString* expirationTime; 
@property (nonatomic,retain) EC2ImportInstanceTaskDetails* importInstance; 
@property (nonatomic,retain) EC2ImportVolumeTaskDetails* importVolume; 
@property (nonatomic,retain) NSString* state; 
@property (nonatomic,retain) NSString* statusMessage; 
@property (nonatomic,retain) NSMutableArray* tags; 
-(void)addTag:(id)arg1;
-(void)setImportInstance:(id)arg1;
-(void)setImportVolume:(id)arg1;
-(void)setConversionTaskId:(id)arg1;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setState:(id)arg1;
-(void)setTags:(id)arg1;
-(void)setStatusMessage:(id)arg1;
-(void)setExpirationTime:(id)arg1;
@end