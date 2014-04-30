/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:40 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3ListVersionsRequest : S3Request {
	NSString* prefix; 
	NSString* keyMarker; 
	NSString* versionIdMarker; 
	NSString* delimiter; 
	int maxKeys; 
}
@property (nonatomic,retain) NSString* prefix; 
@property (nonatomic,retain) NSString* keyMarker; 
@property (nonatomic,retain) NSString* versionIdMarker; 
@property (nonatomic,retain) NSString* delimiter; 
@property (assign,nonatomic) int maxKeys; 
-(id)configureURLRequest;
-(void)setDelimiter:(id)arg1;
-(void)setKeyMarker:(id)arg1;
-(void)setMaxKeys:(int)arg1;
-(void)setVersionIdMarker:(id)arg1;
-(void)dealloc;
-(void)setPrefix:(id)arg1;
@end