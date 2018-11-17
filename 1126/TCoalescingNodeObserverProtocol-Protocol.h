//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol TCoalescingNodeObserverProtocol <NSObject>

@optional
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 queryStopped:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 childrenSpatialDataChanged:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openChildListUpdated:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 syncCompleted:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 spotlightAttrSyncCompleted:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 groupDefinitionChanged:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openSyncCompleted:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 openSyncStarted:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodeMDAttributeChanged:(const struct TFENode *)arg2 attributes:(NSDictionary *)arg3 isDisplayAttributes:(_Bool)arg4;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodeMoved:(const struct TFENode *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesDeleted:(const map_27534541 *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesChanged:(const map_253f12d2 *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 bulkNodesAdded:(const map_27534541 *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 aliasesTargetChanged:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesGoingAway:(const struct TFENodeVector *)arg2;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesDeleted:(const struct TFENodeVector *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesChanged:(const vector_614ab7ad *)arg2 inObservedNode:(const struct TFENode *)arg3;
- (void)coalescingNodeObserver:(struct TCoalescingNodeObserver *)arg1 nodesAdded:(const struct TFENodeVector *)arg2 toObservedNode:(const struct TFENode *)arg3;
@end

