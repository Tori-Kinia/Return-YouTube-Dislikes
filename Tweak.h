#import <YouTubeMusicHeader/_ASCollectionViewCell.h>
#import <YouTubeMusicHeader/_ASDisplayView.h>
#import <YouTubeMusicHeader/ASCollectionView.h>
#import <YouTubeMusicHeader/ELMCellNode.h>
#import <YouTubeMusicHeader/ELMContainerNode.h>
#import <YouTubeMusicHeader/ELMNodeController.h>
#import <YouTubeMusicHeader/ELMNodeFactory.h>
#import <YouTubeMusicHeader/ELMTextNode.h>
#import <YouTubeMusicHeader/UIView+AsyncDisplayKit.h>
#import <YouTubeMusicHeader/YTAlertView.h>
#import <YouTubeMusicHeader/YTELMView.h>
#import <YouTubeMusicHeader/YTFullscreenEngagementActionBarButtonRenderer.h>
#import <YouTubeMusicHeader/YTFullscreenEngagementActionBarButtonView.h>
#import <YouTubeMusicHeader/YTIButtonSupportedRenderers.h>
#import <YouTubeMusicHeader/YTIFormattedString.h>
#import <YouTubeMusicHeader/YTILikeButtonRenderer.h>
#import <YouTubeMusicHeader/YTISlimMetadataButtonSupportedRenderers.h>
#import <YouTubeMusicHeader/YTIToggleButtonRenderer.h>
#import <YouTubeMusicHeader/YTPlayerViewController.h>
#import <YouTubeMusicHeader/YTQTMButton.h>
#import <YouTubeMusicHeader/YTReelElementAsyncComponentView.h>
#import <YouTubeMusicHeader/YTReelModel.h>
#import <YouTubeMusicHeader/YTReelWatchLikesController.h>
#import <YouTubeMusicHeader/YTReelWatchPlaybackOverlayView.h>
#import <YouTubeMusicHeader/YTRollingNumberNode.h>
#import <YouTubeMusicHeader/YTRollingNumberView.h>
#import <YouTubeMusicHeader/YTShortsPlayerViewController.h>
#import <YouTubeMusicHeader/YTSlimVideoDetailsActionView.h>
#import <YouTubeMusicHeader/YTWatchController.h>

@interface YTRollingNumberNode (RYD)
@property (strong, nonatomic) NSString *updatedCount;
@property (strong, nonatomic) NSNumber *updatedCountNumber;
- (void)updateCount:(NSString *)updateCount color:(UIColor *)color;
@end

@interface YTReelWatchPlaybackOverlayView (RYD)
@property (assign, nonatomic) BOOL didGetVote;
@end
