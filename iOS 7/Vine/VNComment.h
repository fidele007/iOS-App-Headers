/*
 * This header is generated by weak_classdump 0.2
 * on Saturday, March 22, 2014 at 3:00:08 PM Central European Standard Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface VNComment : NSObject {
	NSString* _commentId; 
	NSString* _postId; 
	VNUser* _user; 
	NSString* _text; 
	NSDate* _created; 
	NSArray* _entities; 
}
@property (nonatomic,retain) NSString* commentId; 				//@synthesize commentId=_commentId - In the implementation block
@property (nonatomic,retain) NSString* postId; 				//@synthesize postId=_postId - In the implementation block
@property (nonatomic,retain) VNUser* user; 				//@synthesize user=_user - In the implementation block
@property (nonatomic,retain) NSString* text; 				//@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSDate* created; 				//@synthesize created=_created - In the implementation block
@property (nonatomic,retain) NSArray* entities; 				//@synthesize entities=_entities - In the implementation block
-(void)setPostId:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(void)setCommentId:(id)arg1;
-(void)setEntities:(id)arg1;
-(void)setCreated:(id)arg1;
-(void)setUser:(id)arg1;
-(void)setText:(id)arg1;
-(void).cxx_destruct;
@end