//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TInfoExtractorDelegate-Protocol.h"
#import "TMarkTornDown-Protocol.h"
#import "TNodeEngineProtocol-Protocol.h"
#import "TReadWriteLockingProtocol-Protocol.h"
#import "TThumbnailExtractorDelegate-Protocol.h"

@class NSIndexSet, NSOrderedSet, NSString;
@protocol TDesktopViewDataSourceDelegateProtocol;

@interface TDesktopViewDataSource : NSObject <TInfoExtractorDelegate, TNodeEngineProtocol, TReadWriteLockingProtocol, TThumbnailExtractorDelegate, TMarkTornDown>
{
    _Bool _isTornDown;
    struct TReadWriteLock _lock;
    struct shared_ptr<TNodeEngineCocoaBridge> _nodeEngine;
    unsigned long long _iconSize;
    unsigned long long _minimumPileSize;
    struct TFENodeVector _selectedNodes;
    unordered_set_931aff12 _pendingSelectedNodes;
    struct TFENode _selectionAnchorNode;
    NSObject<TDesktopViewDataSourceDelegateProtocol> *_delegate;
    shared_ptr_0f967b3d _thumbnailController;
    struct TRef<NSObject<OS_dispatch_queue>*, TRetainReleasePolicy<dispatch_queue_t>> _thumbnailQueue;
    _Bool _fetchThumbnails;
    struct shared_ptr<TInfoExtractorController> _infoController;
    _Bool _fetchItemInfo;
    _Bool _isDarkBackground;
    _Bool _iCloudMode;
    int _groupBy;
    struct TGroupManager *_groupManager;
    vector_bd3f2f5c _pileItems;
    int _sortBy;
    struct TNSRef<NSMutableOrderedSet<TDesktopViewDataSourceItem *>, void> _sortedItems;
    struct TRef<NSObject<OS_dispatch_queue>*, TRetainReleasePolicy<dispatch_queue_t>> _sortedItemsQueue;
    shared_ptr_c8f8caee _sortComparator;
    struct map<TString, TKVOPubKeyPathAndObservers, std::__1::less<TString>, std::__1::allocator<std::__1::pair<const TString, TKVOPubKeyPathAndObservers>>> _kvObservers;
    struct vector<TNotificationCenterObserver, std::__1::allocator<TNotificationCenterObserver>> _notificationCenterObservers;
}

@property(readonly, getter=isTornDown) _Bool tornDown; // @synthesize tornDown=_isTornDown;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidateInfoTextForKeyNodes:(const struct TFENodeVector *)arg1;
- (void)fetchItemInfoForItems:(id)arg1;
@property _Bool fetchItemInfo; // @dynamic fetchItemInfo;
- (struct TFENode)thumbnailTargetNodeForNode:(const struct TFENode *)arg1;
- (void)invalidateThumbnailForKeyNodes:(const struct TFENodeVector *)arg1;
- (_Bool)fetchIconifiedThumbnails;
- (void)asyncFetchIconsOrThumbnailsForItems:(id)arg1;
- (id)fetchIconsOrThumbnailsForItems:(id)arg1;
@property _Bool fetchThumbnails; // @dynamic fetchThumbnails;
- (id)getCurrentPileWithNodeInFirstThree:(const struct TFENode *)arg1;
- (void)updateAllItemsForReferencePile:(id)arg1 inPile:(id)arg2 sortAddedItems:(_Bool)arg3 itemsToRegroup:(id)arg4 itemsToRemoveAndReAdd:(id)arg5;
- (void)updateAllItemsForPile:(id)arg1 toGroup:(struct TGroup *)arg2 sortAddedItems:(_Bool)arg3 itemsToRegroup:(id)arg4 itemsToRemoveAndReAdd:(id)arg5;
- (void)regroupItem:(id)arg1 toGroup:(struct TGroup *)arg2 withFirstThree:(vector_9edeb3e0 *)arg3 sortAddedItems:(_Bool)arg4 itemsToRegroup:(id)arg5 itemsToRemove:(id)arg6;
- (id)getPileItemForGroup:(const struct TGroup *)arg1;
- (_Bool)isSingleItemPileWithNeverCollapsedItem:(id)arg1;
- (_Bool)isPileableNonPileItem:(id)arg1;
- (void)nodesChanged:(const vector_614ab7ad *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)folderContentChanged:(const struct FolderContentChangeDescriptor *)arg1;
- (void)getGroupedItemsToAddAndRemoveForNodes:(const struct TFENodeVector *)arg1 itemsToRemove:(id)arg2 sortedItemsToAdd:(id)arg3 pileItems:(vector_6b5352a9 *)arg4 sortAddedItems:(_Bool)arg5 delegate:(id)arg6 iconSize:(unsigned long long)arg7 fetchThumbnails:(_Bool)arg8 isDarkBackground:(_Bool)arg9;
- (id)createDesktopItemsWithNodesToRemove:(const struct TFENodeVector *)arg1 isDarkBackground:(_Bool)arg2 group:(struct TGroup *)arg3 groupsToMove:(unordered_set_66e9327b *)arg4;
- (id)createDesktopItemsWithNodesToAdd:(const struct TFENodeVector *)arg1 delegate:(id)arg2 iconSize:(unsigned long long)arg3 fetchThumbnails:(_Bool)arg4 isDarkBackground:(_Bool)arg5 group:(struct TGroup *)arg6 groupsToMove:(unordered_set_66e9327b *)arg7 folders:(id)arg8 volumes:(id)arg9;
- (id)createDesktopItemForNode:(const struct TFENode *)arg1 delegate:(id)arg2 iconSize:(unsigned long long)arg3 fetchThumbnails:(_Bool)arg4 isDarkBackground:(_Bool)arg5 group:(struct TGroup *)arg6 isForAdd:(_Bool)arg7 waitForThumbnail:(_Bool)arg8;
- (void)spotlightAttrSyncComplete:(const struct TGroupedNodes *)arg1 inObservedNode:(const struct TFENode *)arg2;
- (void)unlockForWrite;
- (void)lockForWrite;
- (void)unlockForRead;
- (void)lockForRead;
- (id)valueForUndefinedKey:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2;
- (_Bool)removeObserverCommon:(id)arg1 forKeyPath:(id *)arg2;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void *)arg4;
- (void)reloadIcons;
@property(getter=isDarkBackground) _Bool darkBackground; // @dynamic darkBackground;
@property NSObject<TDesktopViewDataSourceDelegateProtocol> *delegate; // @dynamic delegate;
@property struct TFENode selectionAnchorNode; // @dynamic selectionAnchorNode;
- (unsigned int)nodeObserverForDesktopContainer;
- (void)updateICloudState;
- (void)updatePileItems;
- (void)removeOldPileItems;
- (void)removeAllPileItems;
- (void)sortAsynchronouslyWithCompletionBlock:(const function_b1fce659 *)arg1;
- (void)setSortBy:(int)arg1 withCompletionBlock:(const function_b1fce659 *)arg2;
@property int sortBy; // @dynamic sortBy;
- (void)updatePileCountForGroup:(const struct TGroup *)arg1 increment:(_Bool)arg2 updatedPiles:(id)arg3;
- (id)setPileItemForGroup:(struct TGroup *)arg1 hide:(_Bool)arg2 resetCollapsedState:(_Bool)arg3 insertIfNeeded:(_Bool)arg4;
- (void)groupAsynchronouslyWithCompletionHandler:(const function_b1fce659 *)arg1;
- (id)createPileItemForGroup:(struct TGroup *)arg1 collapsed:(_Bool)arg2;
@property(readonly) struct TGroupManager *groupManager;
- (_Bool)tooFewItemsToBePiled:(unsigned long long)arg1 node:(struct TFENode)arg2;
- (_Bool)singleItemsGroupTogether;
- (void)setGroupBy:(int)arg1 withCompletionHandler:(const function_b1fce659 *)arg2;
@property int groupBy; // @dynamic groupBy;
@property unsigned long long iconSize; // @dynamic iconSize;
@property(readonly, retain) NSOrderedSet *sortedItems; // @dynamic sortedItems;
- (void)deselectAll;
- (void)selectAll;
- (void)deselectNodes:(const struct TFENodeVector *)arg1;
- (void)deselectNodesNoKVO:(const struct TFENodeVector *)arg1;
- (void)setSelectedNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (void)setSelectedNodes:(const struct TFENodeVector *)arg1 byExtendingSelection:(_Bool)arg2;
- (_Bool)isSelectedNode:(const struct TFENode *)arg1;
@property(readonly, retain) NSIndexSet *selectedNodesIndexes; // @dynamic selectedNodesIndexes;
- (const struct TFENodeVector *)selectedNodes;
@property(readonly) unsigned long long selectedNodesCount; // @dynamic selectedNodesCount;
- (id)indexesOfNodes:(const struct TFENodeVector *)arg1;
- (unsigned long long)indexOfNode:(const struct TFENode *)arg1;
- (_Bool)containsNode:(const struct TFENode *)arg1;
- (struct TFENodeVector)nodesInGroup:(const struct TGroup *)arg1;
- (void)getNodes:(struct TFENodeVector *)arg1 atIndexes:(id)arg2;
- (struct TFENodeVector)getNonPileContainerNodes;
- (void)getNodes:(struct TFENodeVector *)arg1;
- (struct TFENode)nodeAtIndex:(unsigned long long)arg1;
- (void)showAllExtensionsPrefChanged:(id)arg1;
- (void)refreshIconForDropAnimation:(const struct TFENode *)arg1;
- (id)iconOrThumbnailForNode:(const struct TFENode *)arg1;
- (_Bool)waitingForThumbnailForNode:(const struct TFENode *)arg1;
- (id)itemForKeyNode:(const struct TFENode *)arg1;
- (id)itemForNode:(const struct TFENode *)arg1;
- (unsigned long long)indexOfItemForInsertion:(id)arg1;
- (shared_ptr_c8f8caee)createComparator;
- (void)_clearWithNoKVO;
- (void)clear;
- (unsigned long long)count;
- (void)cancelDelayedNodeEventHandling;
- (void)delayNodeEventHandling:(double)arg1;
- (void)flushNodeEvents;
- (struct TFENode)target;
- (void)aboutToTearDown;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

