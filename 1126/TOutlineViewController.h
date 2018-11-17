//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IBaseTableViewController.h"

#import "NSOutlineViewDelegate-Protocol.h"

@class NSString, TOutlineViewDataSource;

@interface TOutlineViewController : IBaseTableViewController <NSOutlineViewDelegate>
{
}

- (void)outlineViewItemDidExpand:(id)arg1;
- (void)outlineViewItemDidCollapse:(id)arg1;
- (id)outlineView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)setView:(id)arg1;
- (id)outlineViewNoLoad;
- (id)outlineView;
@property(readonly, retain) TOutlineViewDataSource *dataSource; // @dynamic dataSource;
- (Class)dataSourceClass;
- (void)dealloc;
- (void)viewLoaded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
