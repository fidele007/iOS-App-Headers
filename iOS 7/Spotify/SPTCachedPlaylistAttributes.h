/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:24:13 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SPTCachedPlaylistAttributes : NSObject {
	BOOL _collaborative; 
	NSString* _name; 
	int _length; 
}
@property (nonatomic,retain) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (assign,getter=isCollaborative,nonatomic) BOOL collaborative; 				//@synthesize collaborative=_collaborative - In the implementation block
@property (assign,nonatomic) int length; 				//@synthesize length=_length - In the implementation block
-(void)setCollaborative:(BOOL)arg1;
-(id)initWithCachedPlaylistAttributes:(struct rCachedPlaylistAttributes*)arg1;
-(void)setName:(id)arg1;
-(void)setLength:(int)arg1;
-(void).cxx_destruct;
@end