/*
 * This header is generated by weak_classdump 0.2
 * on Wednesday, April 30, 2014 at 2:25:08 PM Central European Summer Time
 * Operating System: Version 7.0.6 (Build 11B651)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <UIActionSheetDelegate.h>

@interface FBLoginView : UIView <UIActionSheetDelegate> {
	id<FBLoginViewDelegate> _delegate; 
	UILabel* _label; 
	UIButton* _button; 
	FBSession* _session; 
	FBRequestConnection* _request; 
	id<FBGraphUser> _user; 
	NSArray* _permissions; 
	NSArray* _readPermissions; 
	NSArray* _publishPermissions; 
	int _defaultAudience; 
}
@property (copy) NSArray* permissions; 				//@synthesize permissions=_permissions - In the implementation block
@property (nonatomic,copy) NSArray* readPermissions; 				//@synthesize readPermissions=_readPermissions - In the implementation block
@property (nonatomic,copy) NSArray* publishPermissions; 				//@synthesize publishPermissions=_publishPermissions - In the implementation block
@property (assign,nonatomic) int defaultAudience; 				//@synthesize defaultAudience=_defaultAudience - In the implementation block
@property (assign,nonatomic) id<FBLoginViewDelegate> delegate; 				//@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel* label; 				//@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIButton* button; 				//@synthesize button=_button - In the implementation block
@property (nonatomic,retain) FBSession* session; 				//@synthesize session=_session - In the implementation block
@property (nonatomic,retain) FBRequestConnection* request; 				//@synthesize request=_request - In the implementation block
@property (nonatomic,retain) id<FBGraphUser> user; 				//@synthesize user=_user - In the implementation block
-(void)setReadPermissions:(id)arg1;
-(void)setPublishPermissions:(id)arg1;
-(void)setDefaultAudience:(int)arg1;
-(void)informDelegate:(BOOL)arg1;
-(void)wireViewForSession:(id)arg1;
-(void)handleActiveSessionSetNotifications:(id)arg1;
-(void)handleActiveSessionUnsetNotifications:(id)arg1;
-(void)fetchMeInfo;
-(void)configureViewForStateLoggedIn:(BOOL)arg1;
-(id)logInText;
-(id)logOutText;
-(void)wireViewForSessionWithoutOpening:(id)arg1;
-(void)unwireViewForSession;
-(id)initWithPermissions:(id)arg1;
-(id)initWithReadPermissions:(id)arg1;
-(id)initWithPublishPermissions:(id)arg1 defaultAudience:(int)arg2;
-(void)setSession:(id)arg1;
-(void)setPermissions:(id)arg1;
-(void)setUser:(id)arg1;
-(void)setRequest:(id)arg1;
-(id)initWithFrame:(CGRect)arg1;
-(void)dealloc;
-(id)initWithCoder:(id)arg1;
-(void)setDelegate:(id)arg1;
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
-(void)initialize;
-(void)setLabel:(id)arg1;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
-(void)buttonPressed:(id)arg1;
-(void)setButton:(id)arg1;
@end