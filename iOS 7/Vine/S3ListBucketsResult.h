/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:54 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface S3ListBucketsResult : NSObject {
	S3Owner* owner; 
	NSMutableArray* buckets; 
}
@property (nonatomic,retain) S3Owner* owner; 
@property (nonatomic,copy) NSMutableArray* buckets; 
-(void)dealloc;
-(void)setOwner:(id)arg1;
@end