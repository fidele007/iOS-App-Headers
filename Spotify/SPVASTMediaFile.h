/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:05 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPVASTMediaFile : NSObject {
	NSString* _identifier; 
	int _deliveryType; 
	NSString* _mimeType; 
	NSURL* _URL; 
	NSString* _codec; 
	NSNumber* _scalable; 
	NSNumber* _maintainAspectRatio; 
	CGSize _size; 
	struct _NSRange _bitrateRange; 
}
@property (nonatomic,retain) NSString* identifier; 				//@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int deliveryType; 				//@synthesize deliveryType=_deliveryType - In the implementation block
@property (nonatomic,retain) NSString* mimeType; 				//@synthesize mimeType=_mimeType - In the implementation block
@property (assign,nonatomic) CGSize size; 				//@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSURL* URL; 				//@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSString* codec; 				//@synthesize codec=_codec - In the implementation block
@property (assign,nonatomic) struct _NSRange bitrateRange; 				//@synthesize bitrateRange=_bitrateRange - In the implementation block
@property (nonatomic,retain) NSNumber* scalable; 				//@synthesize scalable=_scalable - In the implementation block
@property (nonatomic,retain) NSNumber* maintainAspectRatio; 				//@synthesize maintainAspectRatio=_maintainAspectRatio - In the implementation block
-(void)setDeliveryType:(int)arg1;
-(void)setBitrateRange:(struct _NSRange)arg1;
-(void)setScalable:(id)arg1;
-(void)setMaintainAspectRatio:(id)arg1;
-(id)description;
-(void)setSize:(CGSize)arg1;
-(void)setURL:(id)arg1;
-(void)setIdentifier:(id)arg1;
-(id)initWithNode:(id)arg1;
-(void)setMimeType:(id)arg1;
-(void)setCodec:(id)arg1;
-(void).cxx_destruct;
@end