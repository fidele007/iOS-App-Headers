/*
 * This header is generated by weak_classdump 0.2
 * on Sunday, June 22, 2014 at 3:33:21 AM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface IGSampleBuffer : NSObject {
	struct __CVBuffer* _imageBuffer; 
	NSDictionary* _metadata; 
}
@property (nonatomic,copy) struct __CVBuffer* imageBuffer; 				//@synthesize imageBuffer=_imageBuffer - In the implementation block
@property (nonatomic,copy) NSDictionary* metadata; 				//@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) CGSize size; 
-(id)initWithImageBuffer:(struct __CVBuffer*)arg1 metadata:(id)arg2;
-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer*)arg1;
-(id)initWithImageBuffer:(struct __CVBuffer*)arg1;
-(void)dealloc;
-(void).cxx_destruct;
@end