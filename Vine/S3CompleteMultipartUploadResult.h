/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:01:56 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3CompleteMultipartUploadResult : NSObject {
	NSString* location; 
	NSString* bucket; 
	NSString* key; 
	NSString* etag; 
}
@property (nonatomic,retain) NSString* location; 
@property (nonatomic,retain) NSString* bucket; 
@property (nonatomic,retain) NSString* key; 
@property (nonatomic,retain) NSString* etag; 
-(void)setBucket:(id)arg1;
-(void)dealloc;
-(void)setKey:(id)arg1;
-(void)setEtag:(id)arg1;
-(void)setLocation:(id)arg1;
@end