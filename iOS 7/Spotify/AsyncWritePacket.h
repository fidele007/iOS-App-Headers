/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:17:40 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface AsyncWritePacket : NSObject {
	NSData* buffer; 
	long bytesDone; 
	long tag; 
	double timeout; 
}
-(id)initWithData:(id)arg1 timeout:(double)arg2 tag:(long)arg3;
-(void)dealloc;
@end