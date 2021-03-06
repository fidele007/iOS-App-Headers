//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class PHVoicemailListViewController<PHVoicemailListViewControllerConcrete>, UILabel;

@interface PHVoicemailFolderCell : UITableViewCell
{
    UILabel *_folderLabel;
    UILabel *_countLabel;
    PHVoicemailListViewController<PHVoicemailListViewControllerConcrete> *_viewController;
}

@property(retain, nonatomic) PHVoicemailListViewController<PHVoicemailListViewControllerConcrete> *viewController; // @synthesize viewController=_viewController;
- (void)_updateCount;
- (void)_handleContentSizeDidChange:(id)arg1;
- (void)_handleStoreChanged:(id)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (void)_updateFonts;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

