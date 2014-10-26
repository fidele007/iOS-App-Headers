/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:11:50 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SKMockPaymentTransaction : NSObject {
	NSError* mError; 
	NSString* mTransactionIdentifier; 
	int mTransactionState; 
	SKPayment* mPayment; 
	NSData* mTransactionReceipt; 
	NSDate* mTransactionDate; 
}
@property (nonatomic,retain) NSError* error; 
@property (nonatomic,retain) NSString* transactionIdentifier; 
@property (assign,nonatomic) int transactionState; 
@property (nonatomic,retain) SKPayment* payment; 
@property (nonatomic,retain) NSData* transactionReceipt; 
@property (nonatomic,copy) NSDate* transactionDate; 
-(void)setPayment:(id)arg1;
-(void)setTransactionState:(int)arg1;
-(void)setTransactionReceipt:(id)arg1;
-(void)setError:(id)arg1;
-(void)dealloc;
-(id)init;
-(void)setTransactionIdentifier:(id)arg1;
@end