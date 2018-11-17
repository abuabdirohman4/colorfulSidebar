//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TGoToWindowDelegate-Protocol.h"

@class NSMutableArray, NSString, TBrowserContainerController;

@interface TBackupContainerDelegate : NSObject <TGoToWindowDelegate>
{
    TBrowserContainerController *_container;
    NSMutableArray *_watchedViews;
    shared_ptr_253687d6 _snapshotTarget;
    struct TFENodeVector _backupLastUserSelection;
    _Bool _backupResettingSelection;
    _Bool _backupTargetChangedViaCallback;
    struct CGPoint _backupLastScrollPosition;
    _Bool _backupTargetIsActive;
    function_b1fce659 _viewSyncedToDataSourceHandler;
    struct TFENode _viewSyncedToDataSourceTarget;
    function_b1fce659 _viewFullyPopulatedHandler;
    struct TFENode _oldTargetContainer;
    TNSWeakPtr_34793079 _delayedScrollContentChangedToken;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _clipViewBoundsChangedObservers;
}

@property(retain, nonatomic) NSMutableArray *watchedViews; // @synthesize watchedViews=_watchedViews;
@property(nonatomic) struct TFENodeVector backupLastUserSelection; // @synthesize backupLastUserSelection=_backupLastUserSelection;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewDidFullyPopulate;
- (void)setViewFullyPopulatedHandler:(const function_b1fce659 *)arg1;
- (void)viewDidSyncToDataSource:(const vector_274a36ec *)arg1;
- (void)setViewSyncedToDataSourceHandler:(const function_b1fce659 *)arg1 forTarget:(struct TFENode)arg2;
- (void)targetPathChanged;
- (void)targetPathWillChange;
- (void)viewStyleChanged;
- (void)genericSnapshotNeedsUpdate;
- (_Bool)handleDrawCompletelyIntoBackBuffer;
- (id)nodeViewSettings;
- (void)stopWatchingScrollChanges;
- (void)startWatchingScrollChanges;
- (void)addViewToWatchedViews:(id)arg1;
- (void)scrollContentChanged;
- (void)delayedScrollContentChanged:(id)arg1;
- (void)cancelDelayedScrollContentChange;
- (void)viewContentChanged;
- (void)updateSearchTarget:(struct TFENode)arg1;
- (struct TFENodeVector)getPathSegmentMatchingPathNode:(const struct TFENode *)arg1 rootedAt:(const struct TFENode *)arg2 usingPathNode:(const struct TFENode *)arg3;
- (struct TFENodeVector)getCommonPathTail:(const struct TFENode *)arg1;
- (_Bool)isNodeSnapshotRoot:(const struct TFENode *)arg1;
- (struct TFENodeVector)nodesToRestore;
- (struct CGPoint)lastScrollPosition;
- (void)setSnapshotForNode:(const struct TFENode *)arg1 withDates:(struct __CFArray *)arg2;
- (BOOL)performKeyEquivalent:(id)arg1;
- (void)refreshBackupSnapshots;
- (_Bool)isBackupDeleteAllowed;
- (_Bool)isValidTargetForSnapshot:(const struct TFENode *)arg1;
- (struct TFENode)nodeForPath:(const struct TString *)arg1 options:(unsigned int)arg2;
- (struct TString)pathForOriginalAbsolutePath:(const struct TString *)arg1;
- (struct TFENode)targetForOriginalNode:(const struct TFENode *)arg1;
- (void)adjustNodeToOpen:(struct TFENode *)arg1;
- (struct TFENode)liveViewSettingsNodeForNode:(const struct TFENode *)arg1;
- (struct TFENode)originalNodeForNode:(const struct TFENode *)arg1;
@property(readonly) const struct TFENode *snapshotNode;
- (_Bool)isSnapshotImageBrowser;
- (_Bool)isBackupBrowser;
- (void)setSnapshot:(const shared_ptr_253687d6 *)arg1;
- (const shared_ptr_253687d6 *)snapshot;
- (void)windowDidEndLiveResize:(id)arg1;
- (struct TFENode)target;
- (const struct TFENodeVector *)targetPath;
- (void)mapBackupSelectionToContainer:(const struct TFENode *)arg1 outSelection:(struct TFENodeVector *)arg2;
- (void)updateButtonsEnableStateForSelection:(const struct TFENodeVector *)arg1;
- (_Bool)anyNodeIsAtSnapshotRoot:(const struct TFENodeVector *)arg1;
- (void)selectionChanged;
- (_Bool)shouldShowBigSpinner;
- (void)backupTargetDeactivate:(const struct TFENode *)arg1;
- (void)backupTargetActivate:(const struct TFENode *)arg1 needsSnapshot:(_Bool)arg2 withDates:(struct __CFArray *)arg3;
- (struct TFENode)currentTargetNode;
- (void)backupTargetActivate:(const struct TFENode *)arg1 withDates:(struct __CFArray *)arg2;
- (_Bool)forceICloudMode;
- (_Bool)preventShowGotoWindow;
- (_Bool)preventWindowTitleProxyDrag;
- (_Bool)handleConfigureWindowCloseButton;
- (_Bool)windowShouldClose:(id)arg1;
- (id)window;
- (id)activeBrowserViewController;
- (void)dealloc;
- (void)aboutToTearDown;
- (void)finishInitializingContainer:(id)arg1;
- (void)connectToContainer:(id)arg1;
@property(readonly, nonatomic) TBrowserContainerController *container; // @synthesize container=_container;
@property(nonatomic) shared_ptr_253687d6 snapshotTarget;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

