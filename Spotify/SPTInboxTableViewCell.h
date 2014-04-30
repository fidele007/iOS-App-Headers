/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:55 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <SPTThemableView.h>

@interface SPTInboxTableViewCell : UITableViewCell <SPTThemableView> {
	BOOL _active; 
	id<SPTThemableViewLayoutDelegate> _layoutDelegate; 
	SPTInboxItem* _item; 
	UILabel* _dateLabel; 
	SPTOfflineSyncStatusView* _offlineSyncStatusView; 
}
@property (assign,getter=isActive,nonatomic) BOOL active; 				//@synthesize active=_active - In the implementation block
@property (nonatomic,retain) SPTInboxItem* item; 				//@synthesize item=_item - In the implementation block
@property (nonatomic,retain) UILabel* dateLabel; 				//@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,retain) SPTOfflineSyncStatusView* offlineSyncStatusView; 				//@synthesize offlineSyncStatusView=_offlineSyncStatusView - In the implementation block
@property (assign,nonatomic,__weak) id<SPTThemableViewLayoutDelegate> layoutDelegate; 				//@synthesize layoutDelegate=_layoutDelegate - In the implementation block
+(float)heightWithItem:(id)arg1 inTableView:(id)arg2;
-(void)applyThemeLayout;
-(void)setLayoutDelegate:(id)arg1;
-(void)setOfflineSyncStatusView:(id)arg1;
-(void)setDateLabel:(id)arg1;
-(void)setItem:(id)arg1;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
-(void)setActive:(BOOL)arg1;
-(void)setAccessoryView:(id)arg1;
-(void).cxx_destruct;
@end