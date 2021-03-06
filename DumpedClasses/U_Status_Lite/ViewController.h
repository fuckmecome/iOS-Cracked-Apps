//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ActivityViewControllerDelegate-Protocol.h"
#import "AdManagerDelegate-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "CustomTableViewControllerDelegate-Protocol.h"
#import "DetailTableViewControllerDelegate-Protocol.h"
#import "GlobalViewDelegate-Protocol.h"
#import "GraphViewControllerDelegate-Protocol.h"
#import "MailViewControllerDelegate-Protocol.h"
#import "MenuTableViewControllerDelegate-Protocol.h"

@class ActivityViewController, AdManager, CustomNavigationBar, CustomTableViewController, DetailTableViewController, GlobalView, GraphViewController, MailViewController, MenuTableViewController, NSMutableArray, NSString, NSTimer, NavigationViewController, SplitViewController, Status, UIColor, UIImage, UIView, iPadDetailViewController;

@interface ViewController : UIViewController <GlobalViewDelegate, DetailTableViewControllerDelegate, GraphViewControllerDelegate, CustomTableViewControllerDelegate, MenuTableViewControllerDelegate, AdManagerDelegate, CAAnimationDelegate, ActivityViewControllerDelegate, MailViewControllerDelegate>
{
    _Bool _isIPhone;
    _Bool _isGraphContinue;
    _Bool _isSynchronous;
    _Bool _isNoCreateParts;
    _Bool _statusBarHidden;
    _Bool _isDidCompact;
    _Bool _isAdActivate;
    float _mainScreenScale;
    float _statusBarHeight;
    int _inicationView;
    int _nowAngle;
    int _graphSubScallAllNumber;
    float _iPadMenuViewWidth;
    int _numberOfMaxAverageView;
    Status *_statusObject;
    GlobalView *_globalView;
    DetailTableViewController *_detailTableViewController;
    NavigationViewController *_DetailNaviController;
    iPadDetailViewController *_iPadDetailViewController;
    CustomTableViewController *_customTableViewController;
    GraphViewController *_graphViewController;
    MenuTableViewController *_iPadMenuTableViewController;
    SplitViewController *_splitViewController;
    NavigationViewController *_iPadNaviController;
    long long _graphSubScallSecond;
    long long _graphFirstDate1970;
    NSTimer *_timer;
    UIColor *_baseBackgroundColor;
    ActivityViewController *_activityViewController;
    UIImage *_doneIconImage;
    NSMutableArray *_maxAveragePositions;
    long long _termMinDate1970;
    long long _termMaxDate1970;
    UIView *_animationHiddenView;
    CustomNavigationBar *_customNavigationBar;
    MailViewController *_mailViewController;
    AdManager *_admanager;
    struct CGSize _adBannerSize;
    struct CGRect _viewControllerBounds;
}

@property(nonatomic) _Bool isAdActivate; // @synthesize isAdActivate=_isAdActivate;
@property(nonatomic) struct CGSize adBannerSize; // @synthesize adBannerSize=_adBannerSize;
@property(retain, nonatomic) AdManager *admanager; // @synthesize admanager=_admanager;
@property(nonatomic) _Bool isDidCompact; // @synthesize isDidCompact=_isDidCompact;
@property(retain, nonatomic) MailViewController *mailViewController; // @synthesize mailViewController=_mailViewController;
@property(retain, nonatomic) CustomNavigationBar *customNavigationBar; // @synthesize customNavigationBar=_customNavigationBar;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(retain, nonatomic) UIView *animationHiddenView; // @synthesize animationHiddenView=_animationHiddenView;
@property(nonatomic) long long termMaxDate1970; // @synthesize termMaxDate1970=_termMaxDate1970;
@property(nonatomic) long long termMinDate1970; // @synthesize termMinDate1970=_termMinDate1970;
@property(retain, nonatomic) NSMutableArray *maxAveragePositions; // @synthesize maxAveragePositions=_maxAveragePositions;
@property(nonatomic) int numberOfMaxAverageView; // @synthesize numberOfMaxAverageView=_numberOfMaxAverageView;
@property(retain, nonatomic) UIImage *doneIconImage; // @synthesize doneIconImage=_doneIconImage;
@property(nonatomic) _Bool isNoCreateParts; // @synthesize isNoCreateParts=_isNoCreateParts;
@property(retain, nonatomic) ActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(nonatomic) float iPadMenuViewWidth; // @synthesize iPadMenuViewWidth=_iPadMenuViewWidth;
@property(retain, nonatomic) UIColor *baseBackgroundColor; // @synthesize baseBackgroundColor=_baseBackgroundColor;
@property(nonatomic) _Bool isSynchronous; // @synthesize isSynchronous=_isSynchronous;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isGraphContinue; // @synthesize isGraphContinue=_isGraphContinue;
@property(nonatomic) long long graphFirstDate1970; // @synthesize graphFirstDate1970=_graphFirstDate1970;
@property(nonatomic) long long graphSubScallSecond; // @synthesize graphSubScallSecond=_graphSubScallSecond;
@property(nonatomic) int graphSubScallAllNumber; // @synthesize graphSubScallAllNumber=_graphSubScallAllNumber;
@property(nonatomic) _Bool isIPhone; // @synthesize isIPhone=_isIPhone;
@property(nonatomic) int nowAngle; // @synthesize nowAngle=_nowAngle;
@property(retain, nonatomic) NavigationViewController *iPadNaviController; // @synthesize iPadNaviController=_iPadNaviController;
@property(retain, nonatomic) SplitViewController *splitViewController; // @synthesize splitViewController=_splitViewController;
@property(retain, nonatomic) MenuTableViewController *iPadMenuTableViewController; // @synthesize iPadMenuTableViewController=_iPadMenuTableViewController;
@property(retain, nonatomic) GraphViewController *graphViewController; // @synthesize graphViewController=_graphViewController;
@property(retain, nonatomic) CustomTableViewController *customTableViewController; // @synthesize customTableViewController=_customTableViewController;
@property(retain, nonatomic) iPadDetailViewController *iPadDetailViewController; // @synthesize iPadDetailViewController=_iPadDetailViewController;
@property(retain, nonatomic) NavigationViewController *DetailNaviController; // @synthesize DetailNaviController=_DetailNaviController;
@property(retain, nonatomic) DetailTableViewController *detailTableViewController; // @synthesize detailTableViewController=_detailTableViewController;
@property(retain, nonatomic) GlobalView *globalView; // @synthesize globalView=_globalView;
@property(nonatomic) int inicationView; // @synthesize inicationView=_inicationView;
@property(retain, nonatomic) Status *statusObject; // @synthesize statusObject=_statusObject;
@property(nonatomic) struct CGRect viewControllerBounds; // @synthesize viewControllerBounds=_viewControllerBounds;
@property(nonatomic) float statusBarHeight; // @synthesize statusBarHeight=_statusBarHeight;
@property(nonatomic) float mainScreenScale; // @synthesize mainScreenScale=_mainScreenScale;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)prefersStatusBarHidden;
- (void)statusBarHidden:(_Bool)arg1;
- (void)statusBarTreatment;
- (void)statusBarActivityView:(id)arg1;
- (void)initilizeDefault:(id)arg1;
- (void)adClickDeleate:(id)arg1;
- (id)getMinMaxDate1979:(id)arg1 isFromValue:(_Bool)arg2;
- (void)changeMaxAvgTerm:(id)arg1 isFromValue:(_Bool)arg2 changeDate1970:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)createAllParts;
- (struct CGRect)getPortraitLandscapeBaseRect:(int)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)slideOutTransition:(id)arg1 backToFrontView:(id)arg2;
- (void)slideInTransition:(id)arg1 backToFrontView:(id)arg2;
- (void)frontRearChange:(id)arg1 backToFrontView:(id)arg2 duration:(float)arg3 effect:(int)arg4;
- (void)doneToGraphView:(int)arg1;
- (void)TouchDetailDoneDetailTableView:(id)arg1 nowTableView:(int)arg2;
- (void)TouchDetailDoneCustomTableView:(id)arg1 nowTableView:(int)arg2;
- (void)TouchGraphDoneDetailTableView:(id)arg1;
- (void)toGlovalView:(_Bool)arg1;
- (void)TouchAboutGlobalView:(id)arg1;
- (void)toAboutView:(_Bool)arg1;
- (void)TouchGraphToTableView:(id)arg1 partNumber:(int)arg2;
- (void)toDetailTableView:(int)arg1 changeMenu:(_Bool)arg2;
- (void)TouchGraphOvierViewTableView:(id)arg1 partNumber:(int)arg2;
- (void)TouchPartViewGlobalView:(id)arg1 partNumber:(int)arg2;
- (void)GlobalViewToGraphView:(int)arg1 changeMenu:(_Bool)arg2;
- (void)viewChangeFromiPadMenu:(id)arg1 menuNumber:(int)arg2;
- (void)endTimer;
- (void)getStatusTimer:(id)arg1;
- (void)changeBackGround:(_Bool)arg1;
- (void)purgeMemoryViewController:(id)arg1;
- (id)graphTimeChangeGraphViewController:(id)arg1 graphFirstDate1970:(long long)arg2 subScallSecond:(long long)arg3 getSubScallAllNumber:(int)arg4 nowScalePosition:(int)arg5;
- (void)stopIsGraphContinue:(id)arg1;
- (void)setDataInitiarize;
- (void)dataInitiarize:(int)arg1 graphSubScallSecond:(long long)arg2 graphFirstDate1970:(long long)arg3;
- (void)changeIsGraphContinue:(id)arg1 graphSubScallAllNumber:(int)arg2 graphSubScallSecond:(long long)arg3 graphFirstDate1970:(long long)arg4;
- (_Bool)shouldAutorotate;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)showActivityView:(id)arg1 shareItems:(id)arg2 applicationActivities:(id)arg3;
- (void)showActivityMenuCustumTable:(id)arg1 shareItems:(id)arg2 sender:(id)arg3;
- (void)showActivityMenuDetailTable:(id)arg1 shareItems:(id)arg2 sender:(id)arg3;
- (void)showActivityMenuGraph:(id)arg1 shareItems:(id)arg2 sender:(id)arg3;
- (void)showMailView:(id)arg1;
- (void)beforRotationAction;
- (void)adFrameRedraw:(struct CGRect)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)adjustPortraitViewControllerBounds;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)doIOS7Rotation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)mailViewrotate:(id)arg1 toInterfaceOrientation:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)changeMaxAverageFlagFromGraphViewController:(id)arg1 numberOfMaxAverageView:(int)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

