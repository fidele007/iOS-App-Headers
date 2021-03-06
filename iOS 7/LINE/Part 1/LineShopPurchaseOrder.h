/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:16:03 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineShopPurchaseOrder : NSObject {
	NSString* __shopId; 
	NSString* __productId; 
	NSString* __recipientMid; 
	LineShopPrice* __price; 
	LineShopLocale* __locale; 
	NSDictionary* __presentAttributes; 
	struct {
	} __isSet; 
}
@property (nonatomic,retain) NSString* shopId; 				//@synthesize _shopId=__shopId - In the implementation block
@property (nonatomic,retain) NSString* productId; 				//@synthesize _productId=__productId - In the implementation block
@property (nonatomic,retain) NSString* recipientMid; 				//@synthesize _recipientMid=__recipientMid - In the implementation block
@property (nonatomic,retain) LineShopPrice* price; 				//@synthesize _price=__price - In the implementation block
@property (nonatomic,retain) LineShopLocale* locale; 				//@synthesize _locale=__locale - In the implementation block
@property (nonatomic,retain) NSDictionary* presentAttributes; 				//@synthesize _presentAttributes=__presentAttributes - In the implementation block
-(void)read:(id)arg1;
-(void)setProductId:(id)arg1;
-(void)setRecipientMid:(id)arg1;
-(void)setShopId:(id)arg1;
-(void)setPresentAttributes:(id)arg1;
-(void)setLocale:(id)arg1;
-(void)setPrice:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end