/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:08 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LCBoardConfig : NSObject {
	NSString* mCategory; 
	int mListSize; 
	BOOL mIncludeBody; 
	int mNewTerm; 
	BOOL mPcView; 
}
@property (nonatomic,retain) NSString* category; 
@property (assign,nonatomic) int listSize; 
@property (assign,getter=isIncludeBody,nonatomic) BOOL includeBody; 
@property (assign,nonatomic) int newTerm; 
@property (assign,getter=isPcView,nonatomic) BOOL pcView; 
-(id)initWithCategory:(id)arg1 listSize:(int)arg2 includeBody:(BOOL)arg3 newTerm:(int)arg4;
-(id)pcViewString;
-(void)setListSize:(int)arg1;
-(void)setIncludeBody:(BOOL)arg1;
-(void)setNewTerm:(int)arg1;
-(void)setPcView:(BOOL)arg1;
-(id)initWithCategory:(id)arg1 listSize:(int)arg2 includeBody:(BOOL)arg3 newTerm:(int)arg4 pcView:(BOOL)arg5;
-(id)includeBodyString;
-(id)initWithDic:(id)arg1 category:(id)arg2;
-(void)dealloc;
-(void)setCategory:(id)arg1;
@end