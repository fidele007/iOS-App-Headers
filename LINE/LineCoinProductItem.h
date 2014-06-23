/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:10:21 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineCoinProductItem : NSObject {
	NSString* __itemId; 
	int __coin; 
	int __freeCoin; 
	NSString* __currency; 
	NSString* __price; 
	NSString* __displayPrice; 
	NSString* __name; 
	NSString* __desc; 
	struct {
		unsigned int coin:1;
		unsigned int freeCoin:1;
	} __isSet; 
}
@property (nonatomic,retain) NSString* itemId; 				//@synthesize _itemId=__itemId - In the implementation block
@property (assign,nonatomic) int coin; 				//@synthesize _coin=__coin - In the implementation block
@property (assign,nonatomic) int freeCoin; 				//@synthesize _freeCoin=__freeCoin - In the implementation block
@property (nonatomic,retain) NSString* currency; 				//@synthesize _currency=__currency - In the implementation block
@property (nonatomic,retain) NSString* price; 				//@synthesize _price=__price - In the implementation block
@property (nonatomic,retain) NSString* displayPrice; 				//@synthesize _displayPrice=__displayPrice - In the implementation block
@property (nonatomic,retain) NSString* name; 				//@synthesize _name=__name - In the implementation block
@property (nonatomic,retain) NSString* desc; 				//@synthesize _desc=__desc - In the implementation block
-(void)read:(id)arg1;
-(void)setCoin:(int)arg1;
-(void)setFreeCoin:(int)arg1;
-(void)setDisplayPrice:(id)arg1;
-(void)setName:(id)arg1;
-(void)setItemId:(id)arg1;
-(void)setDesc:(id)arg1;
-(void)setCurrency:(id)arg1;
-(void)setPrice:(id)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end