/*
 * This header is generated by weak_classdump 0.2
 * on Monday, June 23, 2014 at 9:16:14 PM Eastern European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ItemSelectionViewController : NLTableViewController {
	BOOL _reselectable; 
	BOOL _isDirty; 
	NSArray* _items; 
	id<ItemSelectionViewControllerDelegate> _delegate; 
	int _tag; 
	int _lastUpdatedIndex; 
	int _selectedIndex; 
}
@property (nonatomic,retain) NSArray* items; 				//@synthesize items=_items - In the implementation block
@property (assign,nonatomic) id<ItemSelectionViewControllerDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int tag; 				//@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) int selectedIndex; 				//@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) BOOL reselectable; 				//@synthesize reselectable=_reselectable - In the implementation block
@property (assign,nonatomic) int lastUpdatedIndex; 				//@synthesize lastUpdatedIndex=_lastUpdatedIndex - In the implementation block
@property (assign,nonatomic) BOOL isDirty; 				//@synthesize isDirty=_isDirty - In the implementation block
-(void)selectItem:(id)arg1;
-(void)addObservers;
-(void)removeObservers;
-(id)initWithItems:(id)arg1 selectedIndex:(int)arg2;
-(void)setReselectable:(BOOL)arg1;
-(void)setLastUpdatedIndex:(int)arg1;
-(void)__noti__willResignActive:(id)arg1;
-(id)titleForRowAtIndexPath:(id)arg1;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
-(void)setTag:(int)arg1;
-(void)setItems:(id)arg1;
-(void)commit;
-(id)initWithStyle:(int)arg1;
-(void)viewDidLoad;
-(void)loadView;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)arg1;
-(void)setSelectedIndex:(int)arg1;
-(id)initWithItems:(id)arg1;
-(void)setIsDirty:(BOOL)arg1;
-(void).cxx_destruct;
@end