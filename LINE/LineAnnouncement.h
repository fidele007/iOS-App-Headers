/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:12:28 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface LineAnnouncement : NSObject {
	int __index; 
	BOOL __forceUpdate; 
	NSString* __title; 
	NSString* __text; 
	long long __createdTime; 
	NSString* __pictureUrl; 
	NSString* __thumbnailUrl; 
	struct {
		unsigned int index:1;
		unsigned int forceUpdate:1;
		unsigned int createdTime:1;
	} __isSet; 
}
@property (assign,nonatomic) int index; 				//@synthesize _index=__index - In the implementation block
@property (assign,getter=isForceUpdate,nonatomic) BOOL forceUpdate; 				//@synthesize _forceUpdate=__forceUpdate - In the implementation block
@property (nonatomic,retain) NSString* title; 				//@synthesize _title=__title - In the implementation block
@property (nonatomic,retain) NSString* text; 				//@synthesize _text=__text - In the implementation block
@property (assign,nonatomic) long long createdTime; 				//@synthesize _createdTime=__createdTime - In the implementation block
@property (nonatomic,retain) NSString* pictureUrl; 				//@synthesize _pictureUrl=__pictureUrl - In the implementation block
@property (nonatomic,retain) NSString* thumbnailUrl; 				//@synthesize _thumbnailUrl=__thumbnailUrl - In the implementation block
-(void)read:(id)arg1;
-(void)setCreatedTime:(long long)arg1;
-(void)setThumbnailUrl:(id)arg1;
-(void)setPictureUrl:(id)arg1;
-(void)setForceUpdate:(BOOL)arg1;
-(void)setTitle:(id)arg1;
-(void)setText:(id)arg1;
-(void)setIndex:(int)arg1;
-(void).cxx_destruct;
-(void)write:(id)arg1;
@end