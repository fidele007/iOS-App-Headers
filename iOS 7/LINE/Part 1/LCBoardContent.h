/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:14:08 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LCBoardContent : NSObject {
	NSString* mDocucmentId; 
	long long mRevision; 
	long long mRegistered; 
	long long mUpdated; 
	BOOL mNewBadge; 
	NSString* mTitle; 
	NSString* mBody; 
	NSString* mFmtRegistered; 
	NSDictionary* mExtras; 
}
@property (nonatomic,retain) NSString* documentId; 
@property (assign,nonatomic) long long revision; 
@property (assign,nonatomic) long long registered; 
@property (assign,nonatomic) long long updated; 
@property (assign,getter=isNewBadge,nonatomic) BOOL newBadge; 
@property (nonatomic,retain) NSString* title; 
@property (nonatomic,retain) NSString* body; 
@property (nonatomic,retain) NSString* fmtRegistered; 
@property (nonatomic,retain) NSDictionary* extras; 
-(void)setDocumentId:(id)arg1;
-(void)setRevision:(long long)arg1;
-(void)setExtras:(id)arg1;
-(void)setNewBadge:(BOOL)arg1;
-(void)setFmtRegistered:(id)arg1;
-(void)dealloc;
-(void)setTitle:(id)arg1;
-(id)description;
-(id)initWithDictionary:(id)arg1;
-(void)setBody:(id)arg1;
-(void)setUpdated:(long long)arg1;
-(void)setRegistered:(long long)arg1;
@end