/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:28 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3Part : NSObject {
	NSString* etag; 
	NSDate* lastModified; 
	int partNumber; 
	long long size; 
}
@property (nonatomic,retain) NSString* etag; 
@property (nonatomic,retain) NSDate* lastModified; 
@property (assign,nonatomic) int partNumber; 
@property (assign,nonatomic) long long size; 
-(void)setLastModified:(id)arg1;
-(void)dealloc;
-(void)setSize:(long long)arg1;
-(void)setEtag:(id)arg1;
-(void)setPartNumber:(int)arg1;
@end