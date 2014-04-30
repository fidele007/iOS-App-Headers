/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:21 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface InboxCellIPhone : UITableViewCell {
	BOOL _isRead; 
	SPTrack* _track; 
	NSDate* _date; 
	UIImage* _icon; 
	UIImage* _selectedIcon; 
	NSString* _mainTitle; 
	NSString* _subTitle; 
	NSString* _messageBody; 
	InboxCellContentView* _inboxContentView; 
	SPLinkMetadata* _metadataLoader; 
	int _offlineState; 
}
@property (assign,nonatomic) BOOL playing; 
@property (nonatomic,retain) SPTrack* track; 				//@synthesize track=_track - In the implementation block
@property (nonatomic,retain) NSDate* date; 				//@synthesize date=_date - In the implementation block
@property (nonatomic,retain) UIImage* icon; 				//@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImage* selectedIcon; 				//@synthesize selectedIcon=_selectedIcon - In the implementation block
@property (nonatomic,retain) NSString* mainTitle; 				//@synthesize mainTitle=_mainTitle - In the implementation block
@property (nonatomic,retain) NSString* subTitle; 				//@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,retain) NSString* messageBody; 				//@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) InboxCellContentView* inboxContentView; 				//@synthesize inboxContentView=_inboxContentView - In the implementation block
@property (nonatomic,retain) SPLinkMetadata* metadataLoader; 				//@synthesize metadataLoader=_metadataLoader - In the implementation block
@property (assign,nonatomic) BOOL isRead; 				//@synthesize isRead=_isRead - In the implementation block
@property (assign,nonatomic) int offlineState; 				//@synthesize offlineState=_offlineState - In the implementation block
+(float)cellHeightAtIndex:(int)arg1 inContext:(id)arg2 width:(float)arg3;
+(void)initialize;
-(void)setOfflineState:(int)arg1;
-(void)configureWithIndex:(int)arg1 inContext:(id)arg2;
-(void)setInboxContentView:(id)arg1;
-(void)loadIconNamed:(id)arg1;
-(void)setSubTitle:(id)arg1;
-(void)setMetadataLoader:(id)arg1;
-(void)setSelectedIcon:(id)arg1;
-(void)dealloc;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setDate:(id)arg1;
-(void)setIcon:(id)arg1;
-(void)setIsRead:(BOOL)arg1;
-(void)setMessageBody:(id)arg1;
-(void)setPlaying:(BOOL)arg1;
-(void)setTrack:(id)arg1;
-(void).cxx_destruct;
-(void)setMainTitle:(id)arg1;
@end