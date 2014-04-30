/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:21:14 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface SocialRelationEntity : NSObject {
	NSString* _userURIString; 
	NSString* _artistURIString; 
	NSString* _name; 
	FollowData* _followData; 
	NSString* _imageURLString; 
	UIImage* _image; 
}
@property (nonatomic,copy) NSString* userURIString; 				//@synthesize userURIString=_userURIString - In the implementation block
@property (nonatomic,copy) NSString* artistURIString; 				//@synthesize artistURIString=_artistURIString - In the implementation block
@property (nonatomic,copy) NSString* name; 				//@synthesize name=_name - In the implementation block
@property (nonatomic,retain) FollowData* followData; 				//@synthesize followData=_followData - In the implementation block
@property (nonatomic,copy) NSString* imageURLString; 				//@synthesize imageURLString=_imageURLString - In the implementation block
@property (nonatomic,retain) UIImage* image; 				//@synthesize image=_image - In the implementation block
-(void)setFollowData:(id)arg1;
-(id)fallbackName;
-(id)initWithJSONDictionary:(id)arg1;
-(void)setImage:(id)arg1;
-(id)uri;
-(void).cxx_destruct;
@end