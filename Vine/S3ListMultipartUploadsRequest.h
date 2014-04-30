/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:48 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3ListMultipartUploadsRequest : S3Request {
	NSString* delimiter; 
	NSString* keyMarker; 
	NSString* prefix; 
	NSString* uploadIdMarker; 
	int maxUploads; 
	_Bool maxUploadsIsSet; 
}
@property (nonatomic,retain) NSString* delimiter; 
@property (nonatomic,retain) NSString* keyMarker; 
@property (nonatomic,retain) NSString* prefix; 
@property (nonatomic,retain) NSString* uploadIdMarker; 
@property (assign,nonatomic) int maxUploads; 
-(id)configureURLRequest;
-(void)setMaxUploads:(int)arg1;
-(void)setDelimiter:(id)arg1;
-(void)setKeyMarker:(id)arg1;
-(void)setUploadIdMarker:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)setPrefix:(id)arg1;
@end