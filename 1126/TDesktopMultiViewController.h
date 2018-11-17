//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSResponder.h>

#import "TDesktopInlinePreviewDataSource-Protocol.h"
#import "TDesktopViewControllerDelegateProtocol-Protocol.h"
#import "TDesktopViewDataSourceDelegateProtocol-Protocol.h"
#import "TGroupAsFolderDelegate-Protocol.h"

@class NSString, TNodeViewSettings;

@interface TDesktopMultiViewController : NSResponder <TDesktopInlinePreviewDataSource, TDesktopViewDataSourceDelegateProtocol, TDesktopViewControllerDelegateProtocol, TGroupAsFolderDelegate>
{
    vector_5868a58c _desktopViewControllers;
    struct TMutex _desktopViewControllersLock;
    struct TNSRef<TDesktopViewDataSource, void> _dataSource;
    struct TNSRef<TDesktopGridLayoutController, void> _gridLayoutController;
    struct TNSRef<TDesktopIconSpatialDataController, void> _spatialDataController;
    struct TNSRef<TDesktopBandSelectionController, void> _bandSelectionController;
    struct TNSRef<TDesktopInlinePreviewController, void> _inlinePreviewController;
    struct TNSRef<TGroupInFolderAnimationController, void> _groupAsFolderAnimationController;
    struct TFENode _nodeClickedOnMouseDown;
    _Bool _deselectOnBandSelect;
    struct TNSRef<NSEvent, void> _mouseDownEventForDrag;
    struct TNSRef<TDesktopViewController, void> _viewControllerForDrag;
    struct TNSRef<TNodeViewSettings, void> _viewSettings;
    struct TKeyValueObserver _selectedNodeIndexesObserver;
    struct vector<TKeyValueBinder, std::__1::allocator<TKeyValueBinder>> _viewSettingsBinders;
}

+ (id)iconSizeUpDownHelper;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)handleCmdSelectStartupDisk:(id)arg1;
- (_Bool)handleValidateSelectStartupDisk;
- (void)cmdGroupAsFolder:(id)arg1;
- (_Bool)validateGroupAsFolder:(id)arg1;
- (void)cmdEditTags:(id)arg1;
- (_Bool)validateEditTags:(id)arg1;
- (void)cmdDecreaseIconSize:(id)arg1;
- (void)cmdIncreaseIconSize:(id)arg1;
- (_Bool)validateDecreaseIconSize:(id)arg1;
- (_Bool)validateIncreaseIconSize:(id)arg1;
- (void)cmdCleanUpByLabel:(id)arg1;
- (void)cmdCleanUpByKind:(id)arg1;
- (void)cmdCleanUpByPhysicalSize:(id)arg1;
- (void)cmdCleanUpByDateAdded:(id)arg1;
- (void)cmdCleanUpByLastOpenDate:(id)arg1;
- (void)cmdCleanUpByCreationDate:(id)arg1;
- (void)cmdCleanUpByModDate:(id)arg1;
- (void)cmdCleanUpByName:(id)arg1;
- (void)cleanUpBy:(int)arg1;
- (_Bool)validateCleanUpBy:(id)arg1;
- (void)cmdCleanUpBy:(id)arg1;
- (void)cmdCleanUpSelection:(id)arg1;
- (_Bool)validateCleanUpSelection:(id)arg1;
- (void)cmdCleanUp:(id)arg1;
- (_Bool)validateCleanUp:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)accessibilitySetSelectedChildrenAttributeValue:(id)arg1;
- (id)accessibilitySelectedChildrenAttributeValue;
- (id)accessibilityChildrenAttributeValue;
- (struct CGRect)accessibilityFrameAttributeValue;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityShouldUseUniqueId;
- (BOOL)accessibilityIsIgnored;
- (void)cleanUpAnchorPointsForNodes:(const struct TFENodeVector *)arg1;
- (void)cleanUpAllAnchorPoints;
- (void)keyDown:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)bandSelect:(id)arg1;
- (void)fiterOutCollapsedNodes:(struct TFENodeVector *)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)selectionChanged;
- (void)moveSelectionAnchor:(int)arg1 byExtendingSelection:(_Bool)arg2;
- (void)updateInlinePreviewEnabledState;
- (void)inlinePreviewIsVisible:(_Bool)arg1 forItem:(id)arg2;
- (void)inlinePreviewWillLoadForItem:(id)arg1;
- (struct CGRect)inlinePreviewContentFrameForItem:(id)arg1 inHostingView:(id)arg2;
- (struct CGRect)inlinePreviewFrameForItem:(id)arg1 inHostingView:(id)arg2;
- (id)inlinePreviewPropertiesForItem:(id)arg1;
- (_Bool)inlinePreviewLayerIsInWindowServer;
- (struct CGPoint)desktopAnchorPointForGroupAsFolder:(const struct TFENodeVector *)arg1;
- (_Bool)isDesktopAnchorPoint:(const struct CGPoint *)arg1 obscuredByWindowFrames:(const vector_a9587b3d *)arg2;
- (_Bool)isDesktopAnchoredFrame:(const struct CGRect *)arg1 obscuredByWindowFrames:(const vector_a9587b3d *)arg2;
- (void)getPotentiallyObscuringWindowFrames:(vector_a9587b3d *)arg1;
- (void)groupAsFolderUndoCompleted:(struct TNodeTask *)arg1 forGroupFolder:(const struct TFENode *)arg2 nodes:(const struct TFENodeVector *)arg3 status:(int)arg4;
- (void)groupAsFolderUndoStarted:(struct TNodeTask *)arg1 forFolder:(const struct TFENode *)arg2;
- (void)groupAsFolderCompleted:(struct TNodeTask *)arg1 withFolder:(const struct TFENode *)arg2 status:(int)arg3;
- (void)groupAsFolder:(struct TNodeTask *)arg1 createdGroupFolder:(const struct TFENode *)arg2;
- (void)groupAsFolderStarted;
- (void)selectNodesForTask:(const struct TFENodeVector *)arg1 startEditing:(_Bool)arg2;
- (void)selectNodesNowOrLater:(const struct TFENodeVector *)arg1;
- (void)desktopViewController:(id)arg1 snapNodeToGridNowOrLater:(const struct TFENode *)arg2;
- (void)desktopViewController:(id)arg1 shrinkToFitTextViewAboutToCloseForNode:(const struct TFENode *)arg2;
- (_Bool)desktopViewController:(id)arg1 startEditingNodeNowOrLater:(const struct TFENode *)arg2 renameOp:(id)arg3;
- (void)desktopViewController:(id)arg1 concludeDragOperation:(id)arg2 dropTargetView:(id)arg3;
- (_Bool)desktopViewController:(id)arg1 receivePrivateDrag:(id)arg2 dropTargetView:(id)arg3;
- (void)desktopViewController:(id)arg1 finishSnapToGrid:(id)arg2 dropTargetView:(id)arg3;
- (void)desktopViewController:(id)arg1 updateDraggingItemsForSnapToGrid:(id)arg2 dropTargetView:(id)arg3 hideIcons:(_Bool)arg4;
- (struct CGRect)desktopViewController:(id)arg1 dragFlockingFrameForNode:(const struct TFENode *)arg2 dropTargetView:(id)arg3;
- (void)didChangeSelectedNodes;
- (void)invalidateThumbnailsInDrag;
- (double)thumbnailScaleFactorHintForNode:(const struct TFENode *)arg1;
- (void)getDesktopAnchorPointsFromSpatialData:(vector_e1abc270 *)arg1 forNodes:(const struct TFENodeVector *)arg2;
- (struct CGPoint)desktopAnchorPointsFromSpatialDataForNode:(const struct TFENode *)arg1;
- (void)getDesktopAnchorPoints:(vector_e1abc270 *)arg1 forNodes:(const struct TFENodeVector *)arg2;
- (struct CGPoint)desktopAnchorPointForNodeWhileLocked:(const struct TFENode *)arg1;
- (struct CGPoint)desktopAnchorPointForNode:(const struct TFENode *)arg1;
- (struct CGRect)globalIconFrameForNode:(const struct TFENode *)arg1;
- (struct CGRect)globalFrameForNode:(const struct TFENode *)arg1;
- (void)setBandSelectionController:(id)arg1;
- (id)bandSelectionController;
- (void)updateSpatialDataAfterGridSizeChange:(const struct CGSize *)arg1 oldFirstDesktopIconAnchorPoint:(const struct CGPoint *)arg2;
- (void)setDesktopSpatialData:(const vector_55f57b11 *)arg1 forNodes:(const struct TFENodeVector *)arg2;
- (void)getDesktopSpatialData:(vector_55f57b11 *)arg1 forNodes:(const struct TFENodeVector *)arg2;
@property(nonatomic) int sortBy; // @dynamic sortBy;
- (void)setGroupBy:(int)arg1;
- (int)groupBy;
@property(nonatomic, getter=isTitleOnBottom) _Bool titleOnBottom; // @dynamic titleOnBottom;
@property(nonatomic) _Bool showItemInfo; // @dynamic showItemInfo;
@property(nonatomic) _Bool showIconPreview; // @dynamic showIconPreview;
@property(nonatomic) double gridSpacing; // @dynamic gridSpacing;
@property(nonatomic) unsigned long long textSize; // @dynamic textSize;
@property(nonatomic) unsigned long long iconSize; // @dynamic iconSize;
- (void)unbindViewSettings;
- (void)bindViewSettings;
- (void)syncViewSettingsToViewController:(id)arg1;
@property(readonly, retain, nonatomic) TNodeViewSettings *viewSettings;
- (id)viewControllerAtGlobalPoint:(const struct CGPoint *)arg1;
- (void)syncWithScreens:(id)arg1;
- (void)clear;
- (void)removeViewController:(id)arg1;
- (void)addViewController:(id)arg1;
- (vector_5868a58c)desktopViewControllers;
- (id)viewControllerForNodeWhileLocked:(const struct TFENode *)arg1;
- (id)viewControllerForNode:(const struct TFENode *)arg1;
- (void)_getViewController:(id *)arg1 desktopAnchorPoint:(struct CGPoint *)arg2 forNode:(const struct TFENode *)arg3;
- (id)viewControllerAtIndexWhileLocked:(unsigned long long)arg1;
- (id)viewControllerAtIndex:(unsigned long long)arg1;
- (id)firstViewControllerWhileLocked;
- (id)firstViewController;
- (void)aboutToTearDown;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

