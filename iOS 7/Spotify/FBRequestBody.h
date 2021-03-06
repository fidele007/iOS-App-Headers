/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:30 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface FBRequestBody : NSObject {
	NSMutableData* _mutableData; 
}
@property (nonatomic,copy) NSData* data; 
@property (nonatomic,copy) NSMutableData* mutableData; 				//@synthesize mutableData=_mutableData - In the implementation block
+(id)mimeContentType;
-(void)appendUTF8:(id)arg1;
-(void)appendRecordBoundary;
-(void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3;
-(void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3;
-(void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3;
-(void)dealloc;
-(id)init;
@end