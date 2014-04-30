/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:36 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3ListVersionsResult : NSObject {
	NSMutableArray* versionSummaries; 
	NSString* name; 
	NSString* prefix; 
	NSString* keyMarker; 
	NSString* nextKeyMarker; 
	NSString* versionIdMarker; 
	NSString* nextVersionIdMarker; 
	int maxKeys; 
	NSString* delimiter; 
	_Bool isTruncated; 
	NSMutableArray* commonPrefixes; 
}
@property (nonatomic,retain) NSMutableArray* versionSummaries; 
@property (nonatomic,retain) NSString* name; 
@property (nonatomic,retain) NSString* prefix; 
@property (nonatomic,retain) NSString* keyMarker; 
@property (nonatomic,retain) NSString* nextKeyMarker; 
@property (nonatomic,retain) NSString* versionIdMarker; 
@property (nonatomic,retain) NSString* nextVersionIdMarker; 
@property (assign,nonatomic) int maxKeys; 
@property (nonatomic,retain) NSString* delimiter; 
@property (assign,nonatomic) _Bool isTruncated; 
@property (nonatomic,retain) NSMutableArray* commonPrefixes; 
-(void)setDelimiter:(id)arg1;
-(void)setKeyMarker:(id)arg1;
-(void)setMaxKeys:(int)arg1;
-(void)setIsTruncated:(_Bool)arg1;
-(void)setVersionIdMarker:(id)arg1;
-(void)setVersionSummaries:(id)arg1;
-(void)setCommonPrefixes:(id)arg1;
-(void)addDeleteMarker:(id)arg1;
-(void)setNextKeyMarker:(id)arg1;
-(void)setNextVersionIdMarker:(id)arg1;
-(void)dealloc;
-(id)description;
-(void)setName:(id)arg1;
-(void)setPrefix:(id)arg1;
@end